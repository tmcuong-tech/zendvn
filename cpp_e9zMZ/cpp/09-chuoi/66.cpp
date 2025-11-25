#include <iostream>
using namespace std;

int main() {
    string str = "D:/Data/Doing/psd/task.mp3";
    int length = str.length();
    string breadcrumbs = "";

    for (int i = 0; i < length; i++) {
        if (str[i] == '/') {
            breadcrumbs += " > ";
            continue;
        } else if (str[i] != ':') {
            breadcrumbs += str[i];
        }
    }

    cout << breadcrumbs << endl;

    return 0;
}