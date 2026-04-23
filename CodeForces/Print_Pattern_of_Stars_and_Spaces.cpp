// Print Pattern of Stars and Spaces
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = ceil(n/2);
    int y = floor (n/2);
    // Print the shape
    for (int i = 0; i < x ; ++i) {
        // Print leading spaces
        for (int j = i; j < y ; ++j) {
            cout << " ";
        }
        // Print '*'
        cout << "*";
        // Print spaces between '*'
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}
