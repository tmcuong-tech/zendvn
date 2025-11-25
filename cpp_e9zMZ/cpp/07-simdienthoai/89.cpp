#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string phone = "0947597878";
    string result = "No";

    phone = myReplace(phone, ".");
    int tmp = stoi(phone.substr(phone.length() - 2));

    if (tmp == 38 || tmp == 78) result = "Yes";
    cout << result << endl;

    return 0;
}