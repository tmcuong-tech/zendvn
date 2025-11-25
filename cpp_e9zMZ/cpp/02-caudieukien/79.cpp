#include <iostream>
using namespace std;

int main() {
    int month = 2;
    int year = 2022;
    int result = 0;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            result = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            result = 30;
            break;
        case 2:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                result = 29;
            } else {
                result = 28;
            }
            break;
    }

    printf("Tháng %d năm %d có %d ngày.", month, year, result);
    return 0;
}