// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, word;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
        else
            word += s[i];
    }
    reverse(word.begin(), word.end());
    cout << word;
}
