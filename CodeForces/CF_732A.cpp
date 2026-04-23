// https://codeforces.com/problemset/problem/732/A
#include <iostream>
using namespace std;
int main() {
    long long k, r;
    bool found = false;
    cin >> k >> r;
    for(long long i = 1; i <= 1000000 && !found; ++i){
        if ((i * k) % 10 == r || (i * k) % 10 == 0){
            cout << i;
            found = true;
        }
    }
}
