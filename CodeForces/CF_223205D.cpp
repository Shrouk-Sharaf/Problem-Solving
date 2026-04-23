// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
#include <iostream>
#include <cmath>
using namespace std;
bool Prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << (Prime(n) ? "YES" : "NO") << endl;
    }
}
