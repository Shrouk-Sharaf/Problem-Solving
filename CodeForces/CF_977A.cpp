// https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;
int main() {
    long long n , k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout << n;
}
