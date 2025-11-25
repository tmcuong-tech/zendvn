#include <iostream>
#include <vector>
using namespace std;

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

string rtrim(string str) {
    while (isspace(str.back())) {
        str.pop_back();
    }

    return str;
}

string ltrim(string str) {
    while (isspace(str.front())) {
        str.erase(str.begin());
    }

    return str;
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

void printArray(vector<string> arr) {
    string result = "";
    int length = arr.size();

    for (int i = 0; i < length; i++) {
        result += arr[i];
        if (i < length - 1) result += ", ";
    }

    cout << "[" << result << "]";
}

void printArray(int arr[], int length = 0) {
    string result = "";

    for (int i = 0; i < length; i++) {
        result += to_string(arr[i]);
        if (i < length - 1) result += ", ";
    }

    cout << "[" << result << "]";
}

string myRepeat(string character, int length) {
    string record = "";
    for (int i = 1; i <= length; i++) {
        record += character;
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

bool isNumber(string inputStr) {
    try {
        stoi(inputStr);
        return true;
    } catch (const std::exception &e) {
        return false;
    }
}

bool checkExistInVector(vector<string> vector, string key) {
    bool isExist = false;

    for (int i = 0; i < vector.size(); i++) {
        if (!key.compare(vector[i])) {
            isExist = true;
            break;
        }
    }

    return isExist;
}

bool checkExistInVector(vector<int> vector, int key) {
    bool isExist = false;

    for (int i = 0; i < vector.size(); i++) {
        if (key == vector[i]) {
            isExist = true;
            break;
        }
    }

    return isExist;
}

bool checkExistInVector(vector<char> vector, char key) {
    bool isExist = false;

    for (int i = 0; i < vector.size(); i++) {
        if (key == vector[i]) {
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

vector<string> splitString(string inputStr, vector<char> delimiter) {
    vector<string> vector;
    int length = inputStr.length();
    bool isDelimiter = false;
    string item = "";

    for (int i = 0; i < length; i++) {
        char character = inputStr[i];
        if (checkExistInVector(delimiter, character)) {
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
