// https://vjudge.net/contest/657513#problem/D   // 1000
#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        int balance = 0, ans = 0;
         cin >> n;
         string s;
         cin >> s;
         // )))((((())
         for(int i = 0; i < n; ++i){
             if (s[i] == '(') balance++;
             else balance--;
             if (balance < 0){
                 ans++;
                 balance++;
             }
         }
         cout << ans << '\n';
    }
}
