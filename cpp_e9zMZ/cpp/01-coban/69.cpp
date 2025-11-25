#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int nn = n * 11;
    int nnn = n * 111;
    int sum = n + nn + nnn;

    printf("%d + %d + %d = %d", n, nn, nnn, sum);
    return 0;
}