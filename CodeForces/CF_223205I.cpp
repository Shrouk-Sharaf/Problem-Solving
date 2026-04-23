// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
#include <iostream>
using namespace std;
void swap_rows_columns(int array[500][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) swap(array[x-1][i], array[y-1][i]);
    for (int i = 0; i < n; i++) swap(array[i][x-1], array[i][y-1]);
}
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int arr[500][500];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) cin >> arr[i][j];
    }
    swap_rows_columns(arr, n, x, y);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
