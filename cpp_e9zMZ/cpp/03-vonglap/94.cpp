#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int yourNumber = 100;
    int sum = 0;
    string result = "";

    while (yourNumber > 0) {
        int lastNumber = yourNumber % 10;
        yourNumber /= 10;
        sum += lastNumber;
        string sign = (yourNumber != 0) ? " + " : "";
        result = sign + to_string(lastNumber) + result;
    }
    cout << result << " = " << sum << endl;
}