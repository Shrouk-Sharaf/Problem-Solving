// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <iostream>
using namespace std;
void print(int n){
    if (n <= 0) return;
    else if (n == 1) cout << n;
    else cout << n << " ";
    print(n-1);
}
int main() {
    int n;
    cin >> n;
    print(n);
}
