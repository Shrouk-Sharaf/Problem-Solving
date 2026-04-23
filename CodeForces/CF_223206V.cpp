// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    bool rated = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) rated = true;
    }
    if (rated) {
        cout << "rated";
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            cout << "unrated";
            return 0;
        }
    }
    cout << "maybe";
}
