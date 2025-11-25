#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 6;
    string character = "#";
    string space = " ";
    string line = myRepeat(character, height);
    string shape = "";

    for (int i = 2; i < height; i++) {
        shape += myRepeat(space, height - i) + character + "\n";
    }

    shape = line + " \n" + shape + line;
    cout << shape << endl;
}