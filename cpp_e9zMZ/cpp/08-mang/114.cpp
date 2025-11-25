#include <math.h>

#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int arrInt[] = {1, 2, 3};
    int length = sizeof(arrInt) / sizeof(int);
    int maxNumber = arrInt[0];

    for (int elm : arrInt) {
        maxNumber = max(maxNumber, elm);
    }

    for (int &currentNumber : arrInt) {
        currentNumber = maxNumber;
    }

    printArray(arrInt, length);
    return 0;
}