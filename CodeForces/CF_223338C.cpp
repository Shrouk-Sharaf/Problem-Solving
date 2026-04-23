// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll n, k, all = 0, even = 0, odd = 0;
    cin >> n >> k;
    ll s = min(n, k), t = max(n, k);
    all = ((t - s + 1) * (s + t) ) / 2;
    ll firstEven = (s % 2 == 0) ? s : s + 1;
    ll lastEven = (t % 2 == 0) ? t : t - 1;
    even = ((lastEven - firstEven) / 2 + 1) * (firstEven + lastEven) / 2;
    ll firstOdd = (s % 2 != 0) ? s : s + 1;
    ll lastOdd = (t % 2 != 0) ? t : t - 1;
    odd =  ((lastOdd - firstOdd) / 2 + 1) * (firstOdd + lastOdd) / 2;
    cout << all << endl << even << endl << odd << endl;
}
