#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 3;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        shape += createListNumber(1, i) + "\n";
    }
    
    cout << shape << "\n";
}