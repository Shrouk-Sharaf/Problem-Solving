// https://codeforces.com/gym/101102/problem/E
#include <iostream>
using namespace std;
int main() {
    int t;
    long long int n;
    cin >> t;
    while (t--) {
        cin >> n;
        // mimics the behavior of ceil function
        // Use integer division and add 1 if there's a remainder
        cout << (n + 4) / 5 << endl;
    }
}
