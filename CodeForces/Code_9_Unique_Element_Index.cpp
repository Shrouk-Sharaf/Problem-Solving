// Code 9: Unique Element Index
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int length;
        cin >> length;
        int p[length];
        for (int i = 0; i < length; ++i) {
            cin >> p[i];
        }
        int index;
        if (p[0] != p[1] && p[0] != p[2]) {
            index = 1;
        } else {
            for (int j = 1; j < length - 1; ++j) {
                if (p[j] != p[j - 1] && p[j] != p[j + 1]) {
                    index = j + 1;
                    break;
                }
            }
        }
        cout << index << endl;
    }
}
