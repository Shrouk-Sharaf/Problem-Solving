// https://codeforces.com/contest/1996/problem/A
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%4 == 0)
            cout << n/4 << endl;
        else
            cout << n/4 + 1 << endl;
    }
}*/
