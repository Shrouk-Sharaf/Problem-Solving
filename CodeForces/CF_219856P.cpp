// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int word = 0;
    bool inWord = false;
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i]))
            inWord = true;
        else if (inWord && (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')) {
            word++;
            inWord = false;
        }
    }
    if (inWord)
        word++;
    cout << word << endl;
}
