// Sequence Counter
#include<iostream>
using namespace std;
int seq(long long n){
    if (n==1)
        return 1;
    else if (n%2==0)
        return 1+ seq(n/2);
    else
        return 1+seq(3*n+1);
}
int main(){
    long long n;
    cin>>n;
    cout<<seq(n);
}
