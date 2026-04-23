// https://codeforces.com/contest/1353/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int x = n - 1;
        for (int i = 0; i < k; i++){
            a[i] = max(a[i], b[x]);
            x--;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];
        cout << sum << endl;
    }
}
