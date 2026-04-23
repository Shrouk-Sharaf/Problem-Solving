// magnet
#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int k = 0; k < n; ++k){
        if(a[k] != a[k+1])
            count++;
    }
    cout << count;
}
