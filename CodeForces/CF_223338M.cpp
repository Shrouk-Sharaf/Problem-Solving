// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M
#include <iostream>
using namespace std;
int main() {
    string N;
    int X;
    cin >> N >> X;
    long long rem = 0;
    for (char digit : N) {
        rem = (rem * 10 + (digit - '0')) % X;
    }
    cout << (rem == 0 ? "YES" : "NO");
}
