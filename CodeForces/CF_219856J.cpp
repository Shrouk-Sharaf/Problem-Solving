// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    map<char, int> frequency;
    for(char c: s){
        frequency[c]++;
    }
    for(auto i: frequency){
        cout << i.first << " : " << i.second << endl;
    }
}
