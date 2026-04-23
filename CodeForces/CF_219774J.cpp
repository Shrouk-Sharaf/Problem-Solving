// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, freq = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i=0; i < n; i++){
        if(arr[0] == arr[i])
            freq++;
    }
    if (freq % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";
}
