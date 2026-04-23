// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n, m;
    cin >> n >> m;
    ll mat[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    for(ll i = 0; i<n; i++){
        for(ll j = m - 1; j >= 0; j--){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
