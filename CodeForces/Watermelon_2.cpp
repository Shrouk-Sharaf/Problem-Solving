// Watermelon 2
#include <iostream>
using namespace std;
int main() {
    long long t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 != 0)
            cout <<"NO" << endl;
        else{
            x = n / 2;
            if (x % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
