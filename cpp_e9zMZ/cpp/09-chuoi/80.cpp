#include <iostream>
using namespace std;

int main() {
    string str = "ha&il983@#!|+an";
    string numberString;
    string letterString;
    string specialCharString;

    for (char c : str) {
        if (isdigit(c)) {
            numberString += c;
        } else if (isalpha(c)) {
            letterString += c;
        } else if (ispunct(c)) {
            specialCharString += c;
        }
    }

    cout << "Chuỗi số: " << numberString << endl;
    cout << "Chuỗi chữ: " << letterString << endl;
    cout << "Chuỗi đặc biệt: " << specialCharString << endl;
    return 0;
}