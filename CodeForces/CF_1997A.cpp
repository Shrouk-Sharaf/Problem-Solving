// https://codeforces.com/problemset/problem/1997/A
#include <iostream>
using namespace std;
int calculate_time(string s) {
    int n = s.size();
    int time = 2;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) time += 1;
        else time += 2;
    }
    return time;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int max_time = 0;
        string pass = s;
        for (int i = 0; i <= s.size(); i++) {
            for (char c = 'a'; c <= 'z'; c++) {
                string temp = s.substr(0, i) + c + s.substr(i);
                int temp_time = calculate_time(temp);
                if (temp_time > max_time) {
                    max_time = temp_time;
                    pass = temp;
                }
            }
        }
        cout << pass << endl;
    }
}
