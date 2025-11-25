#include <iostream>
using namespace std;

int main() {
    int number = 1000;
    string result = "";

    int index = 1;
    while (index <= number) {
        if (number % index == 0) result += to_string(index) + " ";
        index++;
    }

    cout << "Ước số của " << number << " là " << result;
    return 0;
}