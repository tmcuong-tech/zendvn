#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int n = 3;
    int multi = 1;
    int sum = 0;
    string result = "";

    while (number <= n) {
        string charater = "";
        multi *= number;
        sum += multi;

        for (int i = 1; i < number; i++) {
            charater += to_string(i) + "x";
        }
        string sign = (number < n) ? " + " : " = ";
        result += charater + to_string(number) + sign;
        number++;
    }
    
    cout << result << sum;
}