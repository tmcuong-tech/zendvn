#include <iostream>
using namespace std;

int main() {
    int score[] = {2, 9, 8, 4, 10};
    string student[] = {"Hiếu", "Dũng", "Minh", "Cường", "Lan"};
    int length = sizeof(score) / sizeof(int);
    int idx = 0;

    for (int i = 0; i < length; i++) {
        int currentScore = score[i];
        idx = currentScore > score[idx] ? i : idx;
    }

    cout << "HV có điểm cao nhất - " << student[idx] << ": " << score[idx];
    return 0;
}