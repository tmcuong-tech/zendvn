#include <iostream>
#include <string>
#include <vector>

#include "zvn.h"
using namespace std;

int main() {
    string inputCategory = "D1|Lập trình di động$D2|Lập trình phần mềm$D3|Lập trình nhúng";
    string inputCourse = "1|Dart|D1=2|Golang|D1=3|Laravel|D1=4|TypeScript|D2=5|NodeJS|D2=6|C/C++|D3";

    vector<string> vCategory = splitString(inputCategory, {'|', '$'});
    vector<string> vCourse = splitString(inputCourse, {'|', '='});
    int sizeVCategory = vCategory.size();
    int sizeVCourse = vCourse.size();
    string result = "";

    int index = 1;
    for (int i = 0; i < sizeVCategory; i += 2) {
        string categoryId = vCategory[i];
        string categoryName = vCategory[i + 1];
        string courses = "";
        int count = 0;

        for (int j = 2; j < sizeVCourse; j += 3) {
            if (!categoryId.compare(vCourse[j])) {
                courses += vCourse[j - 1] + ", ";
                count++;
            }
        }

        string record = to_string(index) + ". " + categoryName + " (" + to_string(count) + "): " + courses;
        result += record.substr(0, record.length() - 2) + "\n";
        index++;
    }

    cout << result << endl;

    return 0;
}