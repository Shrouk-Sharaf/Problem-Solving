// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <iostream>
using namespace std;
void new_array(int arr[], int array[], int n){
    for(int i = 0; i < n; i++) cout << array[i] << " ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
int main(){
    int n ;
    cin >> n;
    int arr[n], array[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> array[i];
    new_array(arr, array, n);
}
