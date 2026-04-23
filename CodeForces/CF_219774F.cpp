// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for(long long i = 0; i < t; ++i){
        cin >> arr[i];
    }
    for(long long j = t-1 ; j >= 0; --j){
        cout << arr[j] << " ";
    }
}
