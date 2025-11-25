#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "D:/Data/Doing/psd/hailan.doc";
    int lastSlash = str.find_last_of("/\\");

    string fileName = str.substr(lastSlash + 1);
    int lastDot = fileName.find_last_of(".");

    string fileExtension = fileName.substr(lastDot + 1);
    string fileNameOnly = fileName.substr(0, lastDot);

    cout << "Name: " << fileNameOnly << endl;
    cout << "Extension: " << fileExtension << endl;

    return 0;
}