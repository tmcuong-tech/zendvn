#include <algorithm>
#include <iostream>

using namespace std;
int main() {
    int arrInt[] = {};
    int arrSize = sizeof(arrInt) / sizeof(arrInt[0]);
    sort(arrInt, arrInt + arrSize);
    string result = "";

    for (int number : arrInt) {
        result += to_string(number) + "-";
    }

    result.pop_back();
    cout << result << endl;

    return 0;
}