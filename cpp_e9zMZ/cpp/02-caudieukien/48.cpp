#include <iostream>
using namespace std;

int main() {
    char charater = '1';
    string notice = "Không là nguyên âm";

    switch (charater) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            notice = "Nguyên âm";
            break;
    }
    cout << notice;
}