#include <iostream>
#include <vector>

#include "zvn.h"
using namespace std;

int main() {
    string str = "php/12/java/140/frontend/30";
    char delimiter = '/';
    vector<string> vector;
    int length = str.length();
    bool isDelimiter = false;
    string item = "";
    
    for (int i = 0; i < length; i++) {
        char character = str[i];
        if (character == delimiter) {
            isDelimiter = true;
        } else {
            item += character;
        }
        if (isDelimiter || i == length - 1) {
            vector.push_back(item);
            isDelimiter = false;
            item = "";
        }
    }
    cout << "result: ";
    printArray(vector);
    return 0;
}