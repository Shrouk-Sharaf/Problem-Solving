// Code 5: Character Grid Analysis
#include <iostream>
using namespace std;
int main() {
    int n ,As = 0 ,Ns =0;
    cin >> n;
    char grid[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 'A')
                As += 1;
            else if (grid[i][j] == 'N')
                Ns += 1;
        }
    }
    if (Ns >= 1 && As >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
