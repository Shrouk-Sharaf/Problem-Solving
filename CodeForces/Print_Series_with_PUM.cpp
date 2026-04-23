// Print Series with PUM
#include <iostream>
using namespace std;
int main() {
    int x = 1;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cout << x << " " << x + 1 << " " << x + 2 << " PUM" << endl;
        x += 4;
    }
    return 0;
}
