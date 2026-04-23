// Combination Calculator (Optimized)
#include <iostream>
using namespace std;
long long BC(int n, int r) {
    if (r < 0 || r > n)
        return 0;
    if (r > n / 2)
        r = n - r;
    long long res = 1;
    for (int i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << BC(a, b) << endl;
    }
    return 0;
}
