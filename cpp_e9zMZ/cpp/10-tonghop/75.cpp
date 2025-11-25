#include <iostream>
using namespace std;

int main() {
    string str = "hoclaptrinh";
    string key = "335";
    string result = "";
    int startIndex = 0;

    for (int i = 0; i < key.length(); i++) {
        int size = key[i] - '0';
        string word = str.substr(startIndex, size) + " ";
        word[0] = toupper(word[0]);
        result += word;
        startIndex += size;
    }

    cout << result << endl;
    return 0;
}