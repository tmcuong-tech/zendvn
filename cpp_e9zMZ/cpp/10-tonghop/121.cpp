#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {2, 3, 4};
    int maxOne = arrInt[0];
    int maxTwo = arrInt[1];
    int length = sizeof(arrInt) / sizeof(int);

    for (int i = 2; i < length; i++) {
        if (arrInt[i] > maxOne) {
            maxTwo = max(maxOne, maxTwo);
            maxOne = arrInt[i];
        } else if (arrInt[i] > maxTwo) {
            maxOne = max(maxOne, maxTwo);
            maxTwo = arrInt[i];
        }
    }

    cout << "Max 1: " << maxOne << " - Max 2: " << maxTwo;
    return 0;
}