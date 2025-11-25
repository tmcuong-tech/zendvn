#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string shape = "";
    int height = 4;
    int start = 1;
    int end = 1;

    for (int i = 1; i <= height; i++) {
        string record = "";

        for (int j = start; j <= end; j++) {
            string number = j >= 10 ? to_string(j) : "0" + to_string(j);
            record += number + " ";
        }

        shape += record + "\n";
        start = end + 1;
        end = start + i;
    }
    
    cout << shape << "\n";
}