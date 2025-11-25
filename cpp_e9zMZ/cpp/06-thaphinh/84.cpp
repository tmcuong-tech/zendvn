#include <iostream>

#include "zvn.h"
using namespace std;
int main() {
    int height = 6;
    string shape = myRepeat(" ", height - 1) + "1\n";
    for (int i = 2; i <= height; i++) {
        string number = to_string(i);
        string space = myRepeat(" ", height - i);
        string spaceCenter = myRepeat(" ", 2 * i - 3);
        shape += space + number + spaceCenter + number + "\n";
    }
    cout << shape << endl;
}