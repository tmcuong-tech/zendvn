#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int arrInt[] = {2, 4, 6, 2};
    int length = sizeof(arrInt) / sizeof(int);
    int count = 0;
    float sum = 0;
    string strSum = "";
    bool firstNumber = true;
    
    for (int i = 0; i < length; i += 2) {
        if (arrInt[i] % 2 == 0) {
            string sign = firstNumber == true ? "" : " + ";
            sum += arrInt[i];
            strSum += sign + to_string(arrInt[i]);
            count++;
            firstNumber = false;
        }
    }
    if (count == 0) {
        cout << "Avg: 0";
    } else {
        cout << "Avg: (" << strSum << ") / " << count << " = " << setprecision(2) << fixed << (float)sum / count << endl;
    }
}