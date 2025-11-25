#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 5;
    int number = 1;
    string shape = "";

    for (int i = height; i >= number; i--) {
        string charater = myRepeat("=", i - 1);
        string mark = myRepeat("+", height - i + 1);
        string record = charater + mark;
        shape += record + "\n";
    }
    
    cout << shape << "\n";
}