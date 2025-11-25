#include <cctype>
#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string str = "hai LAN";

    str = trim(str);
    str = optimizeWhiteSpace(str);

    for (int i = 0; i < str.length(); i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    if (!str.empty() && str.back() != '.') str += '.';

    cout << str;
    return 0;
}