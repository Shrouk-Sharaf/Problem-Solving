// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E
#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n, p, q, res = 0;
    cin >> n;
    while (n--){
        cin >> p >> q;
        if ((q-p) >= 2) ++res;
    }
    cout << res;
}
