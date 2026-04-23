// https://codeforces.com/group/pKuPth1CKi/contest/486236/problem/A
#include <iostream>
using namespace std;
string remove_repeated_chars(const string &s) {
    string result;
    for (char c : s) if (result.find(c) == string::npos) result += c;
    return result;
}
int main() {
    int n;
    string a, b;
    cin >> n;
    cin >> a >> b;
    a = remove_repeated_chars(a);
    b = remove_repeated_chars(b);
    if (a.size() == 1 && b.size() == 1) cout << "NO";
    else cout << "YES";
}
