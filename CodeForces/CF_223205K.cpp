// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
#include <iostream>
using namespace std;
void shift_right(int array[], int n, int shift){
    for(int i= n - shift ; i < n; i++) cout << array[i] << " ";
    for(int i = 0; i < n - shift; i++) cout << array[i] << " ";
    cout << endl;
}
int main() {
    int n, x;
    cin >> n >> x;
    int shift = x % n;
    int array[n];
    for(int i = 0; i < n; i++) cin >> array[i];
    shift_right(array, n, shift);
}
