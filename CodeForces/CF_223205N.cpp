// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
#include <iostream>
using namespace std;
void shift_zeros(int array[], int n){
    int count = 0;
    for(int i=0; i< n; ++i){
        if(array[i] == 0) count++;
        else cout << array[i] << " ";
    }
    for(int i=0; i< count; ++i) cout << "0 ";
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    shift_zeros(arr, n);
}
