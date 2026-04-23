// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(); // لو شيلنا السطر ده مش هيطلع الاوتبوت لاخر تيست كيس
    while(t--){
        string s;
        getline(cin, s);
        long long n = s.length();
        if (n > 10)
            cout << s[0] << n - 2 << s[n-1] << endl;
        else
            cout << s << endl;
    }
}
