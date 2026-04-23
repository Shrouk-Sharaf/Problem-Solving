// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
#include <iostream>
using namespace std;
int main(){
    string s, word = "hello";
    int x =0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == word[x]) x++;
    }
    cout << (x == 5 ? "YES" : "NO");
}
