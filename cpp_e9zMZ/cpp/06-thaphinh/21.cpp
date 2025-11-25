#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 3;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        string space = myRepeat(" ", height - i);
        string number = "";
        string record = "";

        for (int k = i; k >= 1; k--) {
            number += to_string(k);
        }
        
        record = space + number;
        shape += record + "\n";
    }

    cout << shape << endl;
}