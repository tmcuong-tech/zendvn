#include <algorithm>
#include <iostream>
#include <vector>

#include "zvn.h"
using namespace std;

string getMaxPoint(vector<string> v) {
    int maxValue = stoi(v[0]);
    for (int i = 1; i < v.size(); i++) {
        if (stoi(v[i]) > maxValue) maxValue = stoi(v[i]);
    }
    return to_string(maxValue);
}

int main() {
    string input = "Hue/2,3,4#Linh/5,3#Duy/5,36";
    vector<string> v = splitString(input, {'/', '#'});
    for (int i = 0; i < v.size(); i += 2) {
        vector<string> vPoint = splitString(v[i + 1], ',');
        cout << v[i] << ": " << getMaxPoint(vPoint) << endl;
    }
    return 0;
}