#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int x = 6;
    int sum = 0;
    string result = "";

    for (int i = 1; i <= x; i++) {
        int power = 2 * i;
        sum += pow(x, power);
        string sign = i == x ? " = " : " + ";
        result += to_string(x) + "^" + to_string(power) + sign;
    }

    cout << result << sum;
    return 0;
}