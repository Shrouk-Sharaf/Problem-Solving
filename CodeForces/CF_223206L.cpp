//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool serejaTurn = true;
    while (l <= r) {
        if (a[l] > a[r]) {
            if (serejaTurn) sereja += a[l];
            else dima += a[l];
            l++;
        }
        else {
            if (serejaTurn) sereja += a[r];
            else dima += a[r];
            r--;
        }
        // السطر دده مسؤول عن تبديل الادوار
        serejaTurn = !serejaTurn;
    }
    cout << sereja << " " << dima << endl;
}
