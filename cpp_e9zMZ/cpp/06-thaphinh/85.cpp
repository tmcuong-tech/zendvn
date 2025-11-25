#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 7;
    string shape = "";
    string space = " ";

    for (int i = 1; i <= height; i++) {
        string record = "";
        for (int j = 1; j <= height; j++) {
            if (j == i || j == height - i + 1) {
                record += to_string(j);
            } else {
                record += space;
            }
        }
        shape += record + "\n";
    }

    cout << shape << endl;
}