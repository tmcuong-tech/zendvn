#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 7;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        shape += myRepeat(" ", i - 1) + to_string(i) + "\n";
    }

    cout << shape << endl;
}