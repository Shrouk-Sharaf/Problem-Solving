// Sum of Natural Numbers
#include<iostream>
using namespace std;
int main(){
    int x,i=1,sum=0;
    cin>>x;
    while (i<=x){
        sum +=i;
        i++;
    }
    cout <<sum<<endl;
    return 0;
}
