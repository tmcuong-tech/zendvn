#include <iostream>
using namespace std;

int main() {
    int height = 3;
    string shape = "";

    for (int i = 1; i <= height; i++) {
        string record = "";

        for (int k = i; k <= height; k++) {
            record += to_string(k);
        }

        shape += record + "\n";
    }

    cout << shape << endl;
}