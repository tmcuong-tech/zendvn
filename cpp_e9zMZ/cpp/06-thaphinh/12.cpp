#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int number = 1;
    int height = 3;
    string shape = "";

    for (int i = height; i >= number; i--) {
        string charater = myRepeat("=", height - i);
        string mark = myRepeat("+", i);
        string record = charater + mark;
        shape += record + "\n";
    }
    
    cout << shape << "\n";
}