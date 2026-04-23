// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <iostream>
using namespace std;
int main (){
    bool ok = false;
    int n, m, X;
    cin >> n >> m;
    long long mat[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> mat[i][j];
        }
    }
    cin >> X;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(mat[i][j] == X){
                ok = true;
                break;
            }
        }
    }
    if(ok)
        cout << "will not take number";
    else
        cout << "will take number";
}
