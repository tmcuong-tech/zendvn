#include <iostream>
using namespace std;

int main() {
    int number = 144;
    string result = "";

    int index = 2;
    while (index <= number) {
        if (number % index == 0) result += to_string(index) + " ";
        index += 2;
    }

    cout << "Ước số chẵn của " << number << " là " << result;
    return 0;
}