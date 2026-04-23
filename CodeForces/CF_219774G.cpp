// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <iostream>
using namespace std;
int main(){
    bool ok = true;
    long long t;
    cin >> t;
    long long p[t];
    for(int i=0; i< t; i++){
        cin >> p[i];
    }
    for (int i = 0; i < t; i++){
        if(p[i]!= p[t - i - 1]){
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
