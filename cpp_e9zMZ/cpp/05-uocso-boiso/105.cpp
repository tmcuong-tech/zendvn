#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 20;
    int result = 0;
    int maxNumber = max(x, y);

    for (int i = maxNumber; i < x * y; i++) {
        if (i % x == 0 && i % y == 0) {
            result = i;
            break;
        }
    }

    cout << "BCNN của " << x << " và " << y << " là " << result;
    return 0;
}