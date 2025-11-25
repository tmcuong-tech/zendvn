#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {0, 1, 2, 1, 0};
    int length = sizeof(arrInt) / sizeof(int);
    string result = "Đối xứng";

    for (int i = 0; i < (length / 2); i++) {
        if (arrInt[i] != arrInt[length - i - 1]) {
            result = "không đối xứng";
            break;
        }
    }

    cout << result;
    return 0;
}