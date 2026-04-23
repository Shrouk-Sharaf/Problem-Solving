// Maximum among N Numbers (Updated)
#include<iostream>
using namespace std;
int main() {
    int x,n,max;
    cin>>x;
    while(x>0){
        cin>>n;
        max=n;
        while(x>1) {
            cin >> n;
            if (max < n)
                max = n;
            --x;
        }
        cout << max <<endl;
        --x;
    }
}
