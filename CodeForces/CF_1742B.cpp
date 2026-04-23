// https://codeforces.com/contest/1742/problem/B
#include <iostream>
using namespace std;
void sort_numbers(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort_numbers(arr, size);
        bool ok = true;
        for (int k = 0; k < size - 1; ++k) {
            if (arr[k] == arr[k + 1]) {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
