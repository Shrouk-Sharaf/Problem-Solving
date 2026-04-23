// smallest pair
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long p[n];
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        long long min_sum = 10000000;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long sum = p[i] + p[j] + j - i;
                if (sum < min_sum)
                    min_sum = sum;
            }
        }
        cout << min_sum << endl;
    }
}
