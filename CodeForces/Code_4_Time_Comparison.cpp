// Code 4: Time Comparison
#include <iostream>
#include <string>
using namespace std;
int main() {
    string time;
    cin >> time;
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    if ((h > 18 || (h == 18 && m >= 5)) || (h < 4 || (h == 4 && m < 35))) {
        cout << "tm t3b2a alkrsh bnga7" << endl;
    } else {
        cout << "mta yazn almghrb" << endl;
    }
}
