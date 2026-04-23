// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/X
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int x_min = min({x1, x2, x3, x4});
    int x_max = max({x1, x2, x3, x4});
    int y_min = min({y1, y2, y3, y4});
    int y_max = max({y1, y2, y3, y4});
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x >= x_min && x <= x_max && y >= y_min && y <= y_max) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
