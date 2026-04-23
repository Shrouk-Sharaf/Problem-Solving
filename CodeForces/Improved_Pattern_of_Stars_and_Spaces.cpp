// Improved Pattern of Stars and Spaces
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = ceil(n/2);
    int y = floor(n/2);
    for (int i = 0; i < x; ++i) {
        for (int j = y; j > 0; --j) {
            cout << " ";
        }
        --y;
        cout << "*";
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }
        if (i != 0)
            cout << "*";
        cout << endl;
    }
    for (int k = 0; k < n; ++k)
        cout <<"*";
    return 0;
}
