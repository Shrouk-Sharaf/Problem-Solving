// https://codeforces.com/group/bmMQ9syPqS/contest/545102/problem/Y
#include <iostream>
using namespace std;
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    A = A % 100;
    B = B % 100;
    C = C % 100;
    D = D % 100;
    long long result = (A * B % 100) * (C * D % 100) % 100;
    if (result < 10) cout << "0" << result << endl;
    else cout << result << endl;
}
