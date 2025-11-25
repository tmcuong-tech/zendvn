#include <iostream>
using namespace std;

int main() {
    int totalSale = 1800;
    const float BONUS_LEVEL_ONE = 0.05;
    const float BONUS_LEVEL_TWO = 0.1;
    const float BONUS_LEVEL_THREE = 0.2;
    float incentive = BONUS_LEVEL_THREE;

    if (totalSale <= 100) {
        incentive = BONUS_LEVEL_ONE;
    } else if (totalSale <= 300) {
        incentive = BONUS_LEVEL_TWO;
    }

    float salary = totalSale * incentive;
    cout << "Hoa hồng: " << salary;
}