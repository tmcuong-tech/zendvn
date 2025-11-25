#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int number = 1;
    int height = 4;
    string shape = "";

    for (int i = number; i <= height; i++) {
        string charater = myRepeat("#", height - i);
        string number = myRepeat(to_string(i), i * 2 - 1);
        string record = charater + number + charater;
        shape += record + "\n";
    }
    
    cout << shape << "\n";
}