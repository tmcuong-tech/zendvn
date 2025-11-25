#include <iostream>
using namespace std;

int main() {
    string str = "@$7-bc";
    bool isCheck = false;
    
    for (char c : str) {
        if (isdigit(c)) {
            isCheck = true;
            break;
        }
    }

    cout << boolalpha << isCheck;
    return 0;
}