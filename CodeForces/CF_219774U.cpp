// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
#include <iostream>
using namespace std;
int main() {
    int n, m, last = 0;
    cin >> n >> m;
    int array[n], subarray[m];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < m; i++)
        cin >> subarray[i];
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = last; j < n; j++) {
            if (subarray[i] == array[j]) {
                last = j + 1;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
