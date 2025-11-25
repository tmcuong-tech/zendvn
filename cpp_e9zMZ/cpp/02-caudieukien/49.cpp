#include <iostream>
using namespace std;

int main() {
    int year = 4020;
    string notice = "Không là năm nhuận";

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        notice = "Năm nhuận";
    }

    cout << notice;
}