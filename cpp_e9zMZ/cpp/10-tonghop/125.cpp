#include <math.h>

#include <iostream>
using namespace std;

int main() {
    string str = "abbcccddddeeeeedcba";
    char powerCharacter = str[0];
    int powerTime = 1;
    int result = 0;

    for (int i = 0; i < str.length() - 1; i++) {
        if (powerCharacter == str[i + 1]) {
            powerTime++;
        } else {
            powerCharacter = str[i + 1];
            if (powerTime >= result) result = powerTime;
            powerTime = 1;
        }
    }

    result = max(powerTime, result);
    cout << result;
    return 0;
}