#include <iostream>
using namespace std;

int main() {
    int num = 92;
    int sum = 0;

    while (num > 0) {
        int lastNumber = num % 10;
        sum += lastNumber;
        num = num / 10;
        if (num == 0 && sum > 10) {
            num = sum;
            sum = 0;
        }
    }

    cout << sum;
    return 0;
}