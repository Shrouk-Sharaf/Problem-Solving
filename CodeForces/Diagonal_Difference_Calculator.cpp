// Diagonal Difference Calculator
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            if (i == j) {
                diag1 += num;
            }
            if (i + j == n - 1) {
                diag2 += num;
            }
        }
    }
    cout << abs(diag1 - diag2) << endl;
    return 0;
}
