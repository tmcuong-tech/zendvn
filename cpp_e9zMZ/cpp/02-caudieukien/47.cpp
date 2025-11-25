#include <iostream>
using namespace std;

int main() {
    int yourAge = 1;
    string result = "Bạn KHÔNG được xem phim ";
    const int LIMIT_AGE = 15;
    const string FILM_NAME = "Thế giới lập trình";

    if (yourAge >= LIMIT_AGE) {
        result = "Bạn được xem phim ";
    }
    cout << result << " " << FILM_NAME;
}