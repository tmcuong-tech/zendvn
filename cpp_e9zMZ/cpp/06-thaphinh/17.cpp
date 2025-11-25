#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 7;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        string charater = myRepeat("#", height - i);
        string left = createListNumber(1, i - 1);
        string right = createListNumberReverse(i, 1);
        string record = charater + left + right + charater;
        shape += record + "\n";
    }
    
    cout << shape << "\n";
}