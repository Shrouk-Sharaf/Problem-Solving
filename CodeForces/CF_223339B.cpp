// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <iostream>
using namespace std;
void print(int n, int num ){
    if (num > n) return;
    cout << num << endl;
    print(n, num + 1);
}
int main() {
    int n;
    cin >> n;
    print(n, 1);
}
