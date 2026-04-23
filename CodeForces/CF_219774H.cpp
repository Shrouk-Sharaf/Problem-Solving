// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    copy_n(istream_iterator<int>(cin), n, v.begin());
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(v[i], v[min_idx]);
        }
    }
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}
