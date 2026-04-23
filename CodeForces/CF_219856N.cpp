// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
#include <iostream>
using namespace std;
int main() {
    int n,  Max = 1;
    string s;
    cin >> n;
    cin >> s;
    char lastChar = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] != lastChar) {
            Max++;
            lastChar = s[i];
        }
    }
    cout << Max << endl;
}
