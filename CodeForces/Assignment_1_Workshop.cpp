// Assignment 1 Workshop
#include<iostream>
using namespace std;
int main(){
    int x,y,b;
    cin >>x>>y;
    b=x,x=y,y=b;
    cout<<x<<" "<<y;
    return 0;
}
