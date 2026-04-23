// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include <iostream>
using namespace std;
int print(int n){
    for(int i = 1; i <= n; ++i){
        cout << i;
        if(i!= n) cout << " ";
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    print(n);
}
