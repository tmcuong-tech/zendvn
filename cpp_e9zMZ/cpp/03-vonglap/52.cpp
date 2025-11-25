#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int yourNumber = 40000000;
    int count = 0;

    while (yourNumber > 0) {
        yourNumber /= 10;
        count++;
    }

    cout << "Total: " << count << " digits" << endl;
}