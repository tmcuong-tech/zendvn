#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 3;
    int times = 3;
    int step = 2;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        string record = "";

        for (int j = 0; j < times; j++) {
            record += to_string(i + (step * j)) + " ";
        }
        
        shape += record + "\n";
    }

    cout << shape << "\n";
}