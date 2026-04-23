// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include <iostream>
#define intt long long
using namespace std;
void MaxandMIN(intt array[], intt size){
    intt max = array[0];
    intt min = array[0];
    for(intt i = 1; i < size; i++){
        if(array[i] > max) max = array[i];
        if(array[i] < min) min = array[i];
    }
    cout << min << " " << max;
}
int main(){
    intt n;
    cin >> n;
    intt array[n];
    for(intt i = 0; i < n; i++)
        cin >> array[i];
    MaxandMIN(array, n);
}
