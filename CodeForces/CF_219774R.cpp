// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    bool ok = true;
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i=0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    for(int i=0; i < n; i++){
        if(arr1[i] != arr2[i]) {
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "yes";
    else
        cout << "no";
}
