// Print Series and Calculate Sum
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while (!(a <= 0 || b <= 0)) {
        string s;
        int count = 0;
        if (a > b) {
            for (int i = b; i <= a; ++i) {
                s = s + to_string(i) + " ";
                count += i;
            }
        } else {
            for (int i = a; i <= b; ++i) {
                s = s + to_string(i) + " ";
                count += i;
            }
        }
        cout << s << "sum =" << count << endl;
        cin >> a >> b;
    }
    return 0;
}
