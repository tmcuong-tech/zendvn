#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string phone = "0818999999";
    string result = "No";

    phone = myReplace(phone, ".");

    for (int i = 1; i < phone.length() - 5; i++) {
        char curr = phone[i];
        if (curr == phone[i + 1] && curr == phone[i + 2] && curr == phone[i + 3] && curr == phone[i + 4] && curr == phone[i + 5]) {
            result = "Yes";
            break;
        }
    }

    cout << result << endl;
    return 0;
}