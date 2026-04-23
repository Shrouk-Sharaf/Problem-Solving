// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <iostream>
using namespace std;
int main(){
    int n, msum = 0, fsum = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i == j)
                msum += arr[i][j];
            if (i + j == n - 1)
                fsum += arr[i][j];
        }
    }
    cout << abs(msum - fsum);
}
