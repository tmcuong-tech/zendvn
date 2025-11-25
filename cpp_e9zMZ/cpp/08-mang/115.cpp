#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int arrInt[] = {2, -224, -16, 2, 3};

    int length = sizeof(arrInt) / sizeof(int);
    int count = 0;

    for (int elm : arrInt)
        if (elm < 0) count++;

    int arrReturn[length - count];

    int index = 0;
    for (int elm : arrInt) {
        if (elm >= 0) arrReturn[index++] = elm;
    }

    printArray(arrReturn, length - count);
    return 0;
}