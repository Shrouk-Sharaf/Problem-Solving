// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
#include <iostream>
#include <algorithm>
#define innt long long
using namespace std;
void distinct(innt array[], innt n){
    if(n == 0){
        cout << 0;
        return;
    }
    innt count = 1;
    sort(array, array + n);
    for(innt i = 0; i < n - 1; i++) if (array[i] != array[i + 1]) count++;
    cout << count;
}
int main(){
    innt n;
    cin >> n;
    innt array[n];
    for(innt i=0; i< n; ++i) cin >> array[i];
    distinct(array, n);
}
