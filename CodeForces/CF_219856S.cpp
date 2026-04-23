// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0, num = 0;
    vector<string> Bstring;
    string Cchar = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'R')
            count++;
        else if (s[i] == 'L')
            count--;
        Cchar += s[i];
        if (count == 0) {
            num++;
            Bstring.push_back(Cchar);
            Cchar = "";
        }
    }
    cout << num << endl;
    for (string substring : Bstring) {
        cout << substring << endl;
    }
}
