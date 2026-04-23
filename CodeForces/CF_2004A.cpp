// https://codeforces.com/contest/2004/problem/A
#include <iostream>
using namespace std;
int main() {
    int t, n, a[40];
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        cout << ((n == 2 && a[2] - a[1] > 1) ? "YES" : "NO") << endl;
    }
}
