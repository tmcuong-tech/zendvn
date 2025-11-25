#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {14, 12, 3, 21, 30};
    int number = 3;
    string result = "Không tồn tại";
    bool flagCheckExist = false;

    for (int elm : arrInt) {
        if (elm % number == 0 && elm % (number + 1) == 0) {
            flagCheckExist = true;
            break;
        }
    }

    if (flagCheckExist == true) {
        result = "Tồn tại";
    }

    cout << result;
    return 0;
}