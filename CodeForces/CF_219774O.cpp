// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <iostream>
using namespace std;
long long fibonacci(long long N) {
    if (N == 1)
        return 0;
    if (N == 2)
        return 1;
    long long a = 0, b = 1;
    for (long long  i = 3; i <= N; ++i) {
        long long next = a + b;
        a = b;
        b = next;
    }
    return b;
}
int main() {
    long long N;
    cin >> N;
    cout << fibonacci(N) << endl;
}
