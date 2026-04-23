// divisible pair
#include <iostream>
using namespace std;
int main() {
    long long t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << ((a != 0 && b != 0 && a % b != 0 && b % a != 0 )? "YES" : "NO") << endl;
    }
}
