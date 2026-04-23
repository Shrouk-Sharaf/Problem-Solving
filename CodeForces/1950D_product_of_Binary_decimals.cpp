//1950D product of Binary decimals
#include <iostream>
using namespace std;
void product_of_Binary_decimals() {
    long long n;
    cin>>n;
    int bin_p[]={10,11,101,111,1001,1011,1101,1111,10001,10011,10101,10111
             ,11001,11011,11101,11111};
    for (int i = 15 ; i >= 0; i--) {
        while (n % bin_p[i] == 0) {
            n /= bin_p[i];
        }
    }
    cout << ((n == 1) ? "YES" : "NO") << endl;
}
int main() {
    long long T;
    cin>>T;
    while (T--) {
        product_of_Binary_decimals();
    }
}
