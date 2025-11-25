#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {4,6,2};
    int maxNumber = arrInt[0];

    for (int elm : arrInt) {
        maxNumber = max(maxNumber, elm);
    }

    cout << "Max: " << maxNumber;
    return 0;
}