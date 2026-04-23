// 1950 C
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));
        string period = "AM";
        if (hour >= 12) {
            period = "PM";
            if (hour > 12)
                hour -= 12;
        }
        if (hour == 0)
            hour = 12;
        cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }
}
