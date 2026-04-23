// https://codeforces.com/group/pKuPth1CKi/contest/489552/problem/A
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s, a;
    cin >> s;
    for(int i = 0; i < n; i++){
        // 00111
        // 01010101
        // 101
        // 101
        if (i == n -1){
            if (s[i] == '1') a += '1';
            else a += "0";
        }
        else{
            if(s[i] == '0' && s[i+1] == '0') a += "01";
            else if(s[i] == '1' && s[i+1] == '1') a += "10";
            else if(s[i] == '1' && s[i+1] == '0') a += "1";
            else a += "0";
        }
    }
    cout << a;
}
