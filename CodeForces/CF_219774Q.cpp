// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, subarrays = 0, l = 0;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; ++i){
            cin >> array[i];
        }
        for (int i = 0; i < n; ++i){
            if(array[i] >= array[i-1])
                ++l;
            else
                l = 1;
            subarrays += l;
        }
        cout << subarrays << endl;
    }
}
