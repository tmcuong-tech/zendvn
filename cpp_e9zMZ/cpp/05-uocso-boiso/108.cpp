#include <iostream>
using namespace std;

int main() {
    int number = 3;
    int result = 1;

    int index = number - 1;
    while (index <= number) {
        if (number % index == 0 && index % 2 == 1) {
            result = index;
            break;
        }
        index--;
    }

    cout << "Ước lẻ lớn nhất của " << number << " là " << result;
    return 0;
}