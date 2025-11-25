#include <iostream>
using namespace std;

int main() {
    int number = 100;
    string result = "";

    int index = 0;
    int tmp = 0;
    while (number * index < 100) {
        tmp = number * index;
        result += to_string(tmp) + " ";
        index++;
    }
    
    cout << "Bội nhỏ hơn 100 của " << number << " là " << result;
    return 0;
}