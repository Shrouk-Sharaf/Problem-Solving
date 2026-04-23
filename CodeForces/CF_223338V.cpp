// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V
#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y4 - y3) / (x4 - x3);
    if (slope1 == slope2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
