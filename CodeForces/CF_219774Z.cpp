//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    int arr[n], lost[q];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> lost[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < q; ++i) {
        int l = 0;
        int r = n - 1;
        bool found = false;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] == lost[i]) {
                found = true;
                break;
            } else if (arr[m] < lost[i])
                l = m + 1;
            else
                r = m - 1;
        }
        if (found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}
