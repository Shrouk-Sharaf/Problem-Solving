// Maximum of N Numbers
#include<iostream>
using namespace std;
int main() {
    int x,n,max;
    cin >> x;
    cin >> n;
    max=n;
    for(int i=1; i < x; ++i){
        cin>>n;
        if(n>max)
            max=n;
    }
    cout<<max;
}
