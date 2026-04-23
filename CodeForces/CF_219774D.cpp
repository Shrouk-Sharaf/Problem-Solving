// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for (long long i = 0; i < t; ++i) {
        cin >> arr[i];
        if (arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << endl;
    }
}
