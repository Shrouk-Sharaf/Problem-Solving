// https://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n, num;
    cin >> n;
    map<int, int> friends;
    for (int i = 0; i < n ; ++i){
        cin >> num;
        friends[num] = i;
    }
    for (auto& pair : friends) {
        cout << pair.second + 1 << ' ';
    }
}
