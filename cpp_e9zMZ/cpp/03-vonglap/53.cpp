#include <iostream>
using namespace std;

int main() {
    int yourNumber = 112;
    bool isCheck = true;
    string notice = "Yes";
    while (yourNumber > 0) {
        int lastNumber = yourNumber % 10;
        if (lastNumber % 2 != 0) {
            isCheck = false;
            break;
        }
        yourNumber = yourNumber / 10;
    }
    
    if (isCheck == false) {
        notice = "No";
    }

    cout << notice << endl;
}