#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    int height = 7;
    string shape = "";
    string record = "";

    for (int i = 1; i <= height; i++) {
        string character = (i % 2 == 0) ? "#" : "o";
        string around = myRepeat(" ", height - i);
        string center = myRepeat(to_string(i) + character, i);

        center = center.substr(0, center.length() - 1);
        record = around + center + around;

        shape += record + "\n";
    }

    for (int i = 1; i <= height / 2; i++) {
        string space1 = myRepeat(" ", (height + 1) / 2);
        string space2 = myRepeat(" ", (height - 4));
        record = space1 + "|" + space2 + "|";
        shape += record + "\n";
    }

    shape += myRepeat("-", 2 * height - 1);
    cout << shape << endl;
    return 0;
}