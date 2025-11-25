#include <iostream>
using namespace std;

int main() {
    int yourNumber = 0;
    string strName = "dương";
    string strEven = "chẵn";

    if (yourNumber < 0) {
        strName = "âm";
    }

    if (yourNumber % 2 != 0) {
        strEven = "lẻ";
    }

    cout << "Số nguyên " << strName << " " << strEven;
    return 0;
}