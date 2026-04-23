// Character Pattern Printer
#include<iostream>
using namespace std;
int main() {
    int x,n;
    char y;
    cin>>y;
    cin>>x;
    for(int i=1; i<=x ; ++i){
        cin>>n;
        for(int c=1; c<=n ; ++c) {
            cout << y;
        }
        cout<<endl;
    }
    return 0;
}
