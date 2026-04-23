// https://codeforces.com/problemset/problem/1999/A
#include <iostream>
using namespace std;
int main(){
    int n;
    string num;
    cin >> n;
    while(n--){
        cin >> num;
        int sum = 0;
        for(char c : num) sum += c - '0';
        cout << sum << endl;
    }
}
