#include <iostream>
#include <string>

#include "zvn.h"
using namespace std;
string createRecord(int index, int height) {
    int countCharacter = index * 2 - 1;
    int countSpace = (height - countCharacter) / 2;
    string strCharacter = myRepeat("o", countCharacter);
    string strSpace = myRepeat(" ", countSpace);
    return strSpace + strCharacter + strSpace + "\n";
}

int main() {
    int height = 5;
    int top = height / 2;
    int bottom = height - top;
    string shape = "";
    for (int i = 1; i <= top; i++) {
        shape += createRecord(i, height);
    }
    for (int j = bottom; j >= 1; j--) {
        shape += createRecord(j, height);
    }
    cout << shape << endl;
}