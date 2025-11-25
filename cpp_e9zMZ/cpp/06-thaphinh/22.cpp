#include <iostream>

#include "zvn.h"
using namespace std;
int main() {
    int height = 5;
    string shape = "";
    string character = "#";
    string space = " ";
    string line = myRepeat(character, height);

    for (int i = 2; i < height; i++) {
        string record = "";
        for (int j = 1; j <= height; j++) {
            if (j == 1 || j == i || j == height - i + 1 || j == height) {
                record += character;
            } else {
                record += space;
            }
        }
        shape += record + "\n";
    }

    shape = line + "\n" + shape + line;
    cout << shape << endl;
}