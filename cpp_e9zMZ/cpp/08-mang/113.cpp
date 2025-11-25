#include <math.h>

#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int arrInt[] = {2, 4, 1};
    int length = sizeof(arrInt) / sizeof(int);

    for (int i = 0; i < length; i++) {
        arrInt[i] = abs(arrInt[i]);
    }

    printArray(arrInt, length);
    return 0;
}