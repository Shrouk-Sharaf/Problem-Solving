// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, x, y;
    cin >> s;
    string small = s;
    if (s.length() == 1)
        cout << s;
    else{
        for(int i = 1; i < s.length(); ++i){
            x = s.substr(0, i);
            y = s.substr(i);
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            string combined = x + y;
            if(combined < small) small = combined;
        }
        cout << small;
    }
}
