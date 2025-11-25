#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int n = 7;
    int multi = 0;
    string result = "";

    while (number <= n) {
        multi += (number * number);
        string sign = (number < n) ? "^2 + " : "^2 = ";
        result += to_string(number) + sign;
        number++;
    }
    
    cout << result << multi;
}