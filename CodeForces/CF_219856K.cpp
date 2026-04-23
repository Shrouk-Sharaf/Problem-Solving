// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string s, t;
        cin >> s >> t;
        for(int i = 0; i < s.length() || i < t.length(); i++){
            if(i < s.length()) cout << s[i];
            if(i < t.length()) cout << t[i];
        }
        cout << endl;
    }
}
