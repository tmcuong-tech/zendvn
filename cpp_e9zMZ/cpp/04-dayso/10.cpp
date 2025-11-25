#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int n = 5;
    int sum = 0;
    string result = "";

    while (number <= n) {
        sum += number;
        string sign = (number < n) ? " + " : " = ";
        result += to_string(number) + sign;
        number++;
    }
    
    cout << result << sum;
}