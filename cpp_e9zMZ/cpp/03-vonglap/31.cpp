#include <iostream>
using namespace std;

int main() {
    int start = 1;
    int end = 30;
    string result;
    string notice = "Không có";

    for (int i = start + 1; i < end; i++) {
        if (i % 13 == 0) {
            result += to_string(i) + " ";
        }
    }

    if (result.length() != 0) {
        notice = result;
    }

    cout << notice;
}