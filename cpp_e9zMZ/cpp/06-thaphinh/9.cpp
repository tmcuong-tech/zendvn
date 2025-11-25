#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 4;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        string character = i % 2 == 0 ? "=" : "+";
        string record = to_string(i) + myRepeat(character, i);
        shape += record + "\n";
    }

    cout << shape << "\n";
}