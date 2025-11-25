#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 5;
    string shape = createListNumber(1, height) + "\n";

    for (int i = 2; i < height; i++) {
        string left = to_string(i);
        string right = to_string(i + height - 1);
        string record = left + myRepeat(" ", height - 2) + right;
        shape += record + "\n";
    }

    shape += createListNumber(height, 2 * height - 1);
    cout << shape << "\n";
}