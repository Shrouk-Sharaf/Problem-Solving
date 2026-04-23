// https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;
int main() {
    int k, n, w, price = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; ++i) price += (i * k);
    cout << ((price - n ) < 0 ? 0 : price - n );
}
