#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int startNumber = 19;
    int endNumber = 19;
    int range = endNumber - startNumber + 1;

    if (startNumber > endNumber) {
        cout << "Số bắt đầu phải nhỏ hơn số kết thúc!" << endl;
    } else {
        int randomNumber = (int)(rand() % range) + startNumber;
        cout << "Số ngẫu nhiên: " << randomNumber << endl;
    }
    return 0;
}