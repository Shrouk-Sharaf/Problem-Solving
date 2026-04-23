// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long p[t];
    for (int i = 0; i < t; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < t; i++) {
        if (p[i] < 0)
            p[i] = 2;
        else if (p[i] > 0)
            p[i] = 1;
    }
    for (int i = 0; i < t; i++) {
        cout << p[i] << " ";
    }
}
