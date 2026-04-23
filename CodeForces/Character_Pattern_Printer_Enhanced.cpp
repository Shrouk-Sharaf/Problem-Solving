// Character Pattern Printer (Enhanced)
#include <iostream>
using namespace std;
int main() {
    char S;
    int N,X;
    cin >> S;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> X;
        for (int j = 0; j < X; ++j) {
            cout << S;
        }
        cout << endl;
    }
    return 0;
}
