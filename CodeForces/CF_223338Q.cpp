// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Q
#include <iostream>
using namespace std;
int main() {
    long long L, R, M;
    cin >> L >> R >> M;
    long long product = 1;
    for (int i = L; i <= R; ++i) product = (product * i) % M;
    cout << product;
}
