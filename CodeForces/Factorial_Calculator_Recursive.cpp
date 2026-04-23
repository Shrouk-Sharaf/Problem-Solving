// Factorial Calculator (Recursive)
#include<iostream>
using namespace std;
long long Factorial(int N){
    if (N==0 || N==1)
        return 1;
    return N * Factorial(N-1);
}
int main(){
    long long n;
    cin>>n;
    cout<<Factorial(n);
}
