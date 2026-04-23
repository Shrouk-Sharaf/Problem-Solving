// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        string query;
        cin >> query;
        if (query == "pop_back")
            s.pop_back();
        else if (query == "front")
            cout << s.front() << endl;
        else if (query == "back")
            cout << s.back() << endl;
        else if (query == "sort") {
            int left, right;
            cin >> left >> right;
            sort(s.begin() + min(left, right) - 1, s.begin() + max(left, right));
        }
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
        }
        else if (query == "substr") {
            int left, right;
            cin >> left >> right;
            for (int i = min(left, right) - 1; i < max(left, right); ++i)
                cout << s[i];
            cout << endl;
        }
        else if (query == "push_back") {
            char c;
            cin >> c;
            s.push_back(c);
        }
        else if (query == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
    }
}
