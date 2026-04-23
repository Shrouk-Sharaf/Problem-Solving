// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int maxvalue = v[i];
            for (int j = i; j < n; j++) {
                maxvalue = max(maxvalue, v[j]);
                cout << maxvalue << " ";
            }
        }
        cout << endl;
    }
}
