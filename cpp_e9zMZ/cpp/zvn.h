#include <iostream>
#include <vector>
using namespace std;

string myReplace(string input, string key) {
    while (input.find(key) != string::npos) {
        int position = input.find(key);
        input.replace(position, key.length(), "");
    }

    return input;
}

string myRepeat(string str, int times) {
    string record = "";
    for (int i = 1; i <= times; i++) {
        record += str;
    }
    return record;
}

string createListNumber(int start, int end) {
    string record = "";
    for (int i = start; i <= end; i++) {
        record += to_string(i);
    }
    return record;
}

string createListNumberReverse(int end, int start) {
    string record = "";
    for (int i = end; i >= start; i--) {
        record += to_string(i);
    }
    return record;
}

bool checkExistInVector(vector<string> v, string key) {
    bool isExist = false;

    for (int i = 0; i < v.size(); i++) {
        if (!key.compare(v[i])) {
            isExist = true;
            break;
        }
    }

    return isExist;
}

bool checkExistInVector(vector<char> v, char key) {
    bool isExist = false;

    for (int i = 0; i < v.size(); i++) {
        if (key == v[i]) {
            isExist = true;
            break;
        }
    }

    return isExist;
}

vector<string> splitString(string inputStr, char delimiter) {
    vector<string> vector;
    int length = inputStr.length();
    bool isDelimiter = false;
    string item = "";

    for (int i = 0; i < length; i++) {
        char character = inputStr[i];
        if (character == delimiter) {
            isDelimiter = true;
        } else {
            item += character;
        }

        if (isDelimiter || i == length - 1) {
            vector.push_back(item);
            isDelimiter = false;
            item = "";
        }
    }

    return vector;
}

vector<string> splitString(string inputStr, vector<char> delimiters) {
    vector<string> vector;
    int length = inputStr.length();
    bool isDelimiter = false;
    string item = "";

    for (int i = 0; i < length; i++) {
        char character = inputStr[i];
        if (checkExistInVector(delimiters, character)) {
            isDelimiter = true;
        } else {
            item += character;
        }

        if (isDelimiter || i == length - 1) {
            vector.push_back(item);
            isDelimiter = false;
            item = "";
        }
    }

    return vector;
}

string optimizeWhiteSpace(string str) {
    string myNewString = "";
    char temp = 'x';
    for (char c : str) {
        if (temp != ' ' && c == ' ') {
            myNewString += ' ';
        }
        temp = c;
        if (c != ' ') {
            myNewString += c;
        }
    }
    int length = myNewString.length();
    char lastChar = myNewString.back();
    if (!isalpha(lastChar) && myNewString[length - 2] == ' ') {
        myNewString[length - 2] = lastChar;
        myNewString.pop_back();
    }
    return myNewString;
}

string trim(string str) {
    while (isspace(str.back())) {
        str.pop_back();
    }

    while (isspace(str.front())) {
        str.erase(str.begin());
    }

    return str;
}

void printArray(int arr[], int length = 0) {
    string result = "";

    for (int i = 0; i < length; i++) {
        result += to_string(arr[i]);
        if (i < length - 1) result += ", ";
    }

    cout << "[" << result << "]";
}

void printArray(vector<string> arr) {
    string result = "";
    int length = arr.size();

    for (int i = 0; i < length; i++) {
        result += arr[i];
        if (i < length - 1) result += ", ";
    }

    cout << "[" << result << "]";
}