// Combination Calculator
#include <iostream>
using namespace std;
long long countPossibleIntegers(int ones, int zeroes) {
    long long result = 1;
    for (int i = 1; i <= zeroes; ++i) {
        result *= (ones + i);
        result /= i;
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << countPossibleIntegers(a, b) << endl;
    }
}
