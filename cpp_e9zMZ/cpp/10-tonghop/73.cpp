#include <iostream>

#include "zvn.h"
using namespace std;
int main() {
    string id = "69";
    string str = "69,  1,   69 , 169  ";
    string strNoSpace = myReplace(str, " ");
    strNoSpace += ",";
    string strId = "";
    int count = 0;
    int length = strNoSpace.length();
    for (int i = 0; i < length; i++) {
        if (strNoSpace[i] == ',') {
            if (id.compare(strId) == 0) count++;
            strId = "";
            continue;
        }
        strId += strNoSpace[i];
    }
    cout << "ID " << id << " xuất hiện " << count << " lần";
}