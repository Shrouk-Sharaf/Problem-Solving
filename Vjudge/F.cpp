// https://vjudge.net/contest/657513#problem/F   // 1000
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (s[0] == ')' || s[n-1] == '(') {
            cout << "NO" << endl;
            continue;
        }
        cout << (n % 2 == 0 ? "YES" : "NO") << endl;
    }
}
