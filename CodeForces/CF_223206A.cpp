// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include <iostream>
using namespace std;
int main(){
    bool palindrome = true;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] == '?') s[i] = s[n - i - 1] = 'a';
        else if (s[i] == '?') s[i] = s[n - i - 1];
        else if (s[n - i - 1] == '?') s[n - i - 1] = s[i];
        else if (s[i] != s[n - i - 1]) {
            palindrome = false;
            break;
        }
    }
    if (n % 2 == 1 && s[n / 2] == '?') s[n / 2] = 'a';
    if (palindrome) cout << s;
    else cout << -1;
}
