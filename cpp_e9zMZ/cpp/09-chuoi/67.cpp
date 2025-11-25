#include <iostream>
using namespace std;

int main() {
    string str = "HaI Lan";

    for (char &c : str) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }

    cout << str << endl;
    return 0;
}