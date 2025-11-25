#include <iostream>
using namespace std;

int main() {
    int numberOne = 5;
    int numberTwo = 3;

    int sum = numberOne + numberTwo;
    int sub = numberOne - numberTwo;
    int multi = numberOne * numberTwo;
    float div = (float)numberOne / numberTwo;
    int modulo = numberOne % numberTwo;

    printf("%d + %d = %d \n", numberOne, numberTwo, sum);
    printf("%d - %d = %d \n", numberOne, numberTwo, sub);
    printf("%d x %d = %d \n", numberOne, numberTwo, multi);
    printf("%d : %d = %.2f \n", numberOne, numberTwo, div);
    printf("%d %c %d = %d \n", numberOne, '%', numberTwo, modulo);
}