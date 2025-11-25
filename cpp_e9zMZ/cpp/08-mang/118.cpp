#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {-2, -1};
    int length = sizeof(arrInt) / sizeof(int);

    string result = "Tăng dần";
    for (int i = 0; i < length - 1; i++) {
        if (arrInt[i] >= arrInt[i + 1]) {
            result = "Không tăng dần";
            break;
        }
    }

    cout << result;
    return 0;
}