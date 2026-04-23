// Word Reverser
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
        int start = 0;
        for (int end = 0; end < str.size(); ++end) {
            if (str[end] == ' ') {
                for (int i = end - 1; i >= start; --i) {
                    cout << str[i];
                }
                cout << " ";
                start = end + 1;
            }
        }
        for (int i = str.size() - 1; i >= start; --i) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
