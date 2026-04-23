//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// prefix sum solution to avoid time limit issues
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main() {
    ll Q, N, a, b;
    cin >> N >> Q;
    ll prefix[N+1] = {};
    for (ll i = 1; i <= N; i++) {
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }
    while(Q--) {
        cin >> a >> b;
        cout << prefix[b]-prefix[a-1] << endl;
    }
}
