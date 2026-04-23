// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <iostream>
using namespace std;
int main(){
    int n, m;
    bool ok = false;
    bool tamam = false;
    cin >> n >> m;
    int l = n;
    int o = m;
    string K;
    cin >> K;
    if (K.length() != n+m+1){
        cout << "No";
        return 0;
    }
    if (K[n] != '-'){
        cout << "No";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if (isdigit(K[i]))
          l--;
        if (l == 0)
            ok = true;
    }
    for(int i = n+1; i < m+n+1; i++) {
        if (isdigit(K[i]))
          o--;
        if (o == 0)
            tamam = true;
    }
    if(ok && tamam)
        cout << "Yes";
    else
        cout << "No";
}
