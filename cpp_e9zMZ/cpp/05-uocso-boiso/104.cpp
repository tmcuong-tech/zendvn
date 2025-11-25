#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int y = 10;
    int result = 0;
    int minNumber = min(x, y);
    
    for (int i = minNumber; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            result = i;
            break;
        }
    }

    cout << "UCLN của " << x << " và " << y << " là " << result;
    return 0;
}