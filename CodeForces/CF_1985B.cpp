// https://codeforces.com/problemset/problem/1985/B
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int Sum = 0, X = 0;
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;
            if (sum > Sum) {
                Sum = sum;
                X = x;
            }
        }
        cout << X << endl;
    }
}
