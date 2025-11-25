#include <iostream>

#include "zvn.h"
using namespace std;

int main() {
    string sentence = "lap trinh php tai zendvn la chuong trinh";
    string searchWord = "tri";
    int result = -1;
    int lengthSearchWord = searchWord.length();
    vector<string> arrSentence = splitString(sentence, ' ');

    for (int i = 0; i < arrSentence.size(); i++) {
        string word = arrSentence[i];
        if (lengthSearchWord <= word.length()) {
            string tmp = word.substr(0, lengthSearchWord);
            if (searchWord.compare(tmp) == 0) {
                result = i + 1;
                break;
            }
        }
    }
    cout << result;
    return 0;
}