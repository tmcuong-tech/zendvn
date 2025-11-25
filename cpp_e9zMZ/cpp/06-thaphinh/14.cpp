#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int number = 1;
    int height = 5;
    string shape = "";

    for (int i = number; i <= height; i++) {
        string space = myRepeat(" ", height - i);
        string left = createListNumberReverse(i, 2);
        string right = createListNumber(2, i);
        string record = space + left + "1" + right + space;
        shape += record + "\n";
    }
    
    cout << shape << "\n";
}