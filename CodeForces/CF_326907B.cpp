// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1 && i == j) cout << "X";
            else if (i == j) cout << "\\";
            else if ( i + j == N - 1 ) cout << "/";
            else cout << "*";
        }
        cout << endl;
    }
}
