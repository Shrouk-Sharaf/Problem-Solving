// Even, Odd, Positive, Negative Counter
#include<iostream>
using namespace std;
int main() {
    int n,x,even=0,odd=0,positive=0,negative=0;
    cin >>n;
    while (n>0){
        cin >>x;
        if(x>0)
            ++positive;
        else if (x<0)
            ++negative;
        if (x % 2 == 0)
            ++even;
        else
            ++odd;
        --n;
    }
    cout<<"Even:"<<even<<endl<<"odd:"<<odd<<endl<<"positive:"<<positive<<endl<<"negative:"<<negative;
    return 0;
}
