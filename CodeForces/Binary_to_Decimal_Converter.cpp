// Binary to Decimal Converter
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string binary;
        cin >> binary;
        int decimal = 0;
        int size = binary.size();
        for (int i = 0; i < size; ++i) {
            if (binary[i] == '1') {
                decimal += pow(2, size - 1 - i);
            }
        }
        cout << decimal << endl;
    }
    return 0;
}
