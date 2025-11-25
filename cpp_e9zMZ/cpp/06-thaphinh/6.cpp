#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string shape = "";
    string character = "+";
    int height = 5;

    for (int i = 1; i <= height; i++) {
        shape += myRepeat(character, i) + "\n";
    }

    cout << shape << "\n";
}