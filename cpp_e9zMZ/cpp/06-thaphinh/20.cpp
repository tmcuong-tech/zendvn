#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 5;
    string shape = "";

    for (int i = height; i >= 1; i--) {
        string record = myRepeat(" ", height - i);

        for (int j = 1; j <= i; j++) {
            record += to_string(j);
        }

        shape += record + "\n";
    }

    cout << shape << endl;
}