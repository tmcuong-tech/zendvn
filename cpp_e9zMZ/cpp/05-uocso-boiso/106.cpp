#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int y = 2;
    string result = "";

    int i = 1;
    while (i <= x) {
        if (x % i == 0 && i % y == 0) result += to_string(i) + " ";
        i++;
    }

    cout << result;
    return 0;
}