#include <iostream>
using namespace std;

int main() {
    int number = 6;
    string result = "Số nguyên tố";

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            result = "Không là số nguyên tố";
            break;
        }
    }

    cout << result << endl;
    return 0;
}