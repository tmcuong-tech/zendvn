#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string phone = "0764.555.578";
    string result = "No";

    phone = myReplace(phone, ".");
    for (int i = 1; i < phone.length() - 3; i++) {
        char current = phone[i];
        if (current == phone[i + 1] && current == phone[i + 2] && current == phone[i + 3]) {
            result = "Yes";
            break;
        }
    }
    cout << result << endl;
}