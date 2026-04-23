// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(char c : s){
        if (c == '\\')
            break;
        else
            cout << c;
    }
}
