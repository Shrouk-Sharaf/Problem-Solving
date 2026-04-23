// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <iostream>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i]))
            cout << char(tolower(s[i]));
        else if(islower(s[i]))
            cout << char(toupper(s[i]));
        else if (s[i] == ',')
            cout << " ";
    }
}
