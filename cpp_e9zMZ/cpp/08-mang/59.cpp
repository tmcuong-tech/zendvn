#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {7, 8, 5, 5};
    int yourNumber = 5;
    bool found;
    int length = sizeof(arrInt) / sizeof(int);

    for (int i = 0; i < length; i++) {
        if (yourNumber == arrInt[i]) {
            found = true;
            break;
        }
    }

    if (found != true) {
        cout << "Không tồn tại";
    } else {
        cout << "Tồn tại";
    }
}