// String Reverser
#include<iostream>
#include<string>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string str;
        getline(cin, str);
        for (int i = str.size() - 1; i >= 0; --i) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
