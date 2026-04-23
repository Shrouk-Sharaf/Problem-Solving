// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (c + b > a)){
        cout << "Valid" << endl;
        double s = (a + b + c) / 2.0;
        // this is called heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(6) << area;
    }
    else cout << "Invalid";
}
