// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include <iostream>
using namespace std;
int main(){
    string s, word = "EGYPT";
    cin >> s;
    for(int i =0 ; i < s.length(); ++i){
        if(s[i] == 'E' && s.substr(i, 5) == word){
            s.erase(i, 5);
            s.replace(i, 0, " ");
        }
    }
    cout << s;
}
