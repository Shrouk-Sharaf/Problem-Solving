// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <iostream>
using namespace std;
int main (){
    int sum = 0;
    string s;
    getline(cin, s);
    for(int i=0; i < s.length(); ++i){
        sum += s[i]- '0';
    }
    cout << sum;
}
