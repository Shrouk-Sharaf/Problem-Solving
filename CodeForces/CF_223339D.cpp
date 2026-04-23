// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <iostream>
using namespace std;
void print(string str, int s){
    if(s == str.size()) return;
    cout << str[s] << " ";
    print(str, s+1);
}
int main(){
    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        print(str, 0);
        cout << "\n";
    }
}
