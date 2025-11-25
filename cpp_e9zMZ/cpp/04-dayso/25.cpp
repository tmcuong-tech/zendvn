#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int number = n;
    int multi = 1;
    string result = "";

    while (number >= 1) {
        multi *= number;
        string sign = (number > 1) ? " x " : " = ";
        result += to_string(number) + sign;
        number--;
    }

    cout << result << multi;
    return 0;
}