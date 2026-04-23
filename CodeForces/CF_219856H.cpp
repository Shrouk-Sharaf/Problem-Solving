// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool ok = false;
        string s;
        cin >> s;
        for (int i =0; i < s.length() - 2; ++i){
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                ok = true;
                break;
            }
        }
        cout << ((ok)? "Good" : "Bad") << endl;
    }
}
