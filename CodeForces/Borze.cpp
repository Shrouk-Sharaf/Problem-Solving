// Borze
#include<iostream>
#include <string>
using namespace std;
int main(){
    string n , num;
    cin >> n;
    for (size_t i = 0; i < n.length(); ++i) {
        if (n[i] == '.') {
            num += '0';
        } else if (i + 1 < n.length() && n[i] == '-' && n[i + 1] == '.') {
            num += '1';
            ++i;
        } else if (i + 1 < n.length() && n[i] == '-' && n[i + 1] == '-') {
            num += '2';
            ++i;
        }
    }
    cout << num;
}
