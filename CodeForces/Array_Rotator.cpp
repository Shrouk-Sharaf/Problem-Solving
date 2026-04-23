// Array Rotator
#include<iostream>
using namespace std;
void rotate(int arr[], int n, int k) {
    k = k % n;
    for (int i = 0; i < n; ++i) {
        cout << arr[(i + k) % n] << " ";
    }
    cout << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        rotate(arr, n, k);
    }
    return 0;
}
