// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
}
