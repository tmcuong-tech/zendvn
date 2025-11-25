#include <iostream>
using namespace std;

int main() {
    string input = "dksds!03@#8330#@8983hndh!@";
    string phone;

    for (char c : input) {
        if (isdigit(c)) {
            phone += c;
        }
    }

    cout << phone;
    return 0;
}