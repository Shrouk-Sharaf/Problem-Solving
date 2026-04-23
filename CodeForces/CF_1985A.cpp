//https://codeforces.com/problemset/problem/1985/A
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string word1, word2;
    for (int i = 0; i < n; ++i) {
        cin >> word1 >> word2;
        cout << word2[0] + word1.substr(1, 2) << " " << word1[0]+word2.substr(1, 2) << endl;
    }
}
