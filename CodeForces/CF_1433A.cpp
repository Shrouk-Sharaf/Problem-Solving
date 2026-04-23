// https://codeforces.com/problemset/problem/1433/A
#include <iostream>
using namespace std;

int Total(int x) {
    string x_str = to_string(x);
    char digit = x_str[0];
    int press = 0;

    for (char d = '1'; d <= digit; ++d) {
        for (int i = 1; i <= 4; ++i) {
            string apartment_str(i, d);
            press += i;
            if (apartment_str == x_str) {
                return press;
            }
        }
    }
    return press;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << Total(x) << endl;
    }
}*/
