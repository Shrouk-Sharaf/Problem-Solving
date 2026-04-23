//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
// verrrrrrrrrrrrrrrrrrrrrry important
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> count(m + 1, 0); // m + 1 is the size of the array and 0 is the initial value
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  // this counts the frequency of each element
    }
    for (int i = 1; i <= m; i++) {
        cout << count[i] << endl;
    }
}
