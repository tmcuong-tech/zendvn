#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int arrInt[] = {4, 3, 1, 2};
    int length = sizeof(arrInt) / sizeof(int);
    int min = arrInt[0];
    int max = arrInt[0];
    int total = arrInt[0];

    for (int i = 1; i < length; i++) {
        int salaryCurrent = arrInt[i];
        if (min < salaryCurrent) min = salaryCurrent;
        if (max > salaryCurrent) max = salaryCurrent;
        total += salaryCurrent;
    }

    double result = (double)(total - min - max) / (length - 2);
    cout << setprecision(2) << fixed << result;
    return 0;
}