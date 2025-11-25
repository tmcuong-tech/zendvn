#include <iostream>
#include <vector>

#include "zvn.h"
using namespace std;

int main() {
    string str = "php/12/java/14";
    int strLength = str.length();
    vector<string> vInfo = splitString(str, '/');
    int maxTime = -1;

    for (int i = 1; i < vInfo.size(); i += 2) {
        int time = stoi(vInfo[i]);
        if (time > maxTime) maxTime = time;
    }
    for (int i = 1; i < vInfo.size(); i += 2) {
        if (stoi(vInfo[i]) == maxTime) {
            cout << vInfo[i - 1] << ": " << maxTime << endl;
        }
    }
}