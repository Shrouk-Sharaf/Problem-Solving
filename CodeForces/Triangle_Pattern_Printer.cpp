// Triangle Pattern Printer
#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = N - 1; i >= 1; --i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}
