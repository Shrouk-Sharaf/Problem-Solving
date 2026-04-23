// https://codeforces.com/problemset/problem/677/A
#include <iostream>
using namespace std;
int main(){
    int n, h;
    int result = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] <= h) result++;
        else result += 2;
    }
    cout << result;
}
