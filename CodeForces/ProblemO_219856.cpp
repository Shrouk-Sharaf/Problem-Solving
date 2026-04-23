// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<int> count(26, 0);
    char c;
    for (long long i = 0; i < n; ++i) {
        cin >> c;
        ++count[c - 'a'];
    }
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < count[i]; ++j)
            cout << (char)(i + 'a');
    }
}
