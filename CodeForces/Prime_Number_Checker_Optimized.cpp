// Prime Number Checker (Optimized)
#include<iostream>
using namespace std;
bool check_prime(long long n){
    for(int i=2; i*i<=n;++i){
        if (n%i==0)
            return false;
    }
    return true;
}
int main(){
    int t;
    long long n;
    cin>>t;
    while(t>0){
        cin>>n;
        if (check_prime(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    --t;
    }
}
