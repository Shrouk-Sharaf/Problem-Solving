// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include <iostream>
using namespace std;
void print_smth(int n, char c){
    for(int i = 0; i < n; ++i){
        if(i == n - 1) cout << c;
        else cout << c << " ";
    }
    cout << endl;
}
int main (){
    int T, n;
    char c;
    cin >> T;
    while(T--){
        cin >> n >> c;
        print_smth(n, c);
    }
}
