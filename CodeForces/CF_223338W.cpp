// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    double C1x = (X1 + X2) / 2.0;
    double C1y = (Y1 + Y2) / 2.0;
    double C2x = (X3 + X4) / 2.0;
    double C2y = (Y3 + Y4) / 2.0;
    double r1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) / 2.0;
    double r2 = sqrt(pow(X4 - X3, 2) + pow(Y4 - Y3, 2)) / 2.0;
    double distance = sqrt(pow(C2x - C1x, 2) + pow(C2y - C1y, 2));
    if (distance <= (r1 + r2) && distance >= abs(r1 - r2)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
