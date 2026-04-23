// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length()/2 ; ++i){
        if(s[i]!= s[s.length() - i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
