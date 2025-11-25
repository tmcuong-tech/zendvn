#include <iostream>
#include <vector>

#include "zvn.h"
using namespace std;

int main() {
    string inputName = "abw=nodejs;def=javascript;nfv=reactjs;";
    string inputTime = "abw=120;nfv=410;def=590";
    int lengthInputName = inputName.length();
    int lengthInputTime = inputTime.length();
    vector<char> delimiter = {'=', ';'};
    vector<string> vName = splitString(inputName, delimiter);
    vector<string> vTime = splitString(inputTime, delimiter);
    vector<string> vCourseId;
    int sizeVTime = vTime.size();
    string item = "";
    bool isDelimiter = false;
    int maxTime = -1;
    int maxTimeIdx = -1;

    for (int i = 1; i < sizeVTime; i += 2) {
        int time = stoi(vTime[i]);
        if (time > maxTime) maxTime = time;
    }

    for (int i = 0; i < sizeVTime; i += 2) {
        string courseId = vTime[i];
        int time = stoi(vTime[i + 1]);
        if (time == maxTime) vCourseId.push_back(courseId);
    }

    for (int i = 0; i < vName.size(); i += 2) {
        string courseId = vName[i];
        string courseName = vName[i + 1];
        if (checkExistInVector(vCourseId, courseId)) {
            cout << "Course Id: " << courseId << " - Course Name: " << courseName << " - Course Time: " << maxTime << endl;
        }
    }

    return 0;
}