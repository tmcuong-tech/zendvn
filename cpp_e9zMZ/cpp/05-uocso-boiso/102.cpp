#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {14, 12, 3, 5, 6};
    int number = 9;
    string result = "Không tồn tại";
    bool flagCheckExist = false;

    for (int elm : arrInt) {
        if (elm != 0 && number % elm == 0) {
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