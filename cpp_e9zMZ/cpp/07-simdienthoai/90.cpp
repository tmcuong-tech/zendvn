#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string phone = "0948531779";  
    string result = "No";

    phone = myReplace(phone, ".");
    int tmp = stoi(phone.substr(phone.length() - 2));

    if (tmp == 39 || tmp == 79) result = "Yes";
    cout << result << endl;

    return 0;
}