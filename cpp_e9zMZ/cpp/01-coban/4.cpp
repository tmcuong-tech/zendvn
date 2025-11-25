#include <iostream>
using namespace std;

int main() {
    int one = 1;
    int two = 5;
    int three = 19;

    int maxOneTwo = max(one, two);
    int maxNumber = max(maxOneTwo, three);

    printf("Max %d, %d, %d: %d", one, two, three, maxNumber);
}