// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/D
#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll a, b, q;
    cin >> a >> b >> q;
    ll result = q % 3;
    if(result == 1) cout << a;
    else if(result == 2) cout << b;
    else cout << (a ^ b);
}
