// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
#include <iostream>
using namespace std;
int main() {
    int x, y, r, n;
    cin >> x >> y >> r >> n;
    while (n--) {
        int x1, y1;
        cin >> x1 >> y1;
        if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) <= r * r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
