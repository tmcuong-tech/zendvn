#include <iostream>
using namespace std;

int main() {
    int scoreOne = 7;
    int scoreTwo = 8;
    int scoreThree = 4;

    int maxOneTwo = max(scoreOne, scoreTwo);
    int maxNumber = max(maxOneTwo, scoreThree);
    float avg = (float)(scoreOne + scoreTwo + scoreThree) / 3;

    printf("Avg: %.1f \n", avg);
    printf("Max: %d \n", maxNumber);
}