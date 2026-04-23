// https://codeforces.com/problemset/problem/96/A
#include <iostream>
using namespace std;
int main() {
    string match;
    cin >> match;
    int sequence = 1;

    for (int i = 1; i < match.length(); ++i) {
        if (match[i] == match[i-1]) {
            sequence++;
            if (sequence >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else sequence = 1;
    }
    cout << "NO";
}
