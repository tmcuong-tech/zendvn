#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {4, 2, 3, 6};
    int sumEven = 0;
    int sumOdd = 0;

    for (int number : arrInt) {
        if (number % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
    }

    cout << "sumEven = " << sumEven << endl;
    cout << "sumOdd = " << sumOdd << endl;
    cout << "sumAll = " << sumEven + sumOdd << endl;
}