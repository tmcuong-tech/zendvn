#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string phone = "0589244567";
    string result = "No";

    phone = myReplace(phone, ".");
    phone = phone.substr(phone.length() - 3);

    int first = phone[0] - 0;
    int second = phone[1] - 0;
    int third = phone[2] - 0;

    if (first == second - 1 && first == third - 2) result = "Yes";

    cout << result << endl;
    return 0;
}