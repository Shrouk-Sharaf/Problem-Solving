//https://codeforces.com/problemset/problem/228/A
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = 4;
    if (a == b) res--;
    if (a == c || b == c) res--;
    if (a == d || b == d || c == d) res--;
    cout << 4 - res;
}
