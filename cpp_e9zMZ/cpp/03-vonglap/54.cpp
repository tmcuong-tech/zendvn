#include <iostream>
using namespace std;

int main() {
    int yourNumber = 279;
    int rightDigit = yourNumber % 10;
    yourNumber = yourNumber / 10;
    string result = "Yes";

    while (yourNumber > 0) {
        int currentDigit = yourNumber % 10;
        if (rightDigit <= currentDigit) {
            result = "No";
            break;
        }
        rightDigit = currentDigit;
        yourNumber = yourNumber / 10;
    }

    cout << result << endl;
}