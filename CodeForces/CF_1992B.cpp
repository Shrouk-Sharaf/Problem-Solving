//https://codeforces.com/contest/1992/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, result = 0;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        sort(arr, arr + k);
        for (int i = 0; i < k - 1; i++) {
            if (arr[i] == 1)
                result++;
            else
                result += (arr[i] * 2) - 1;
        }
        cout << result << endl;
    }
}
