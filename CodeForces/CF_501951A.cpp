// https://codeforces.com/group/9w9xt8C4av/contest/501951/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int needed = x - a[i].first;
        int low = i + 1, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid].first == needed) {
                cout << a[i].second << " " << a[mid].second;
                return 0;
            }
            if (a[mid].first < needed) low = mid + 1;
            else high = mid - 1;
        }
    }
    cout << -1;
}
