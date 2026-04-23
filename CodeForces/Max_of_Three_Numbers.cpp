// Max of Three Numbers
#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x>>y>>z;
    if (x>y && x>z){
        if (y<z){
            cout<<y <<" "<< x<<endl;
        }
        else {
            cout << z << " " << x << endl;
        }
    }
    else if (y>x && y>z){
        if(x<z){
            cout<<x <<" "<< y<<endl;
        }
        else{
            cout<<z <<" "<< y<<endl;
        }
    }
    else if (z>y && z>x){
        if (y<x){
            cout<<y <<" "<< z<<endl;
        }
        else{
            cout<<x <<" "<< z<<endl;
        }
    }
    else if ( x == y){
        if (y<z){
            cout<< y << " "<< z;
        }
        else{
            cout<< z << " "<< y;
        }
    }
    else if ( x == z){
        if (z<y){
            cout<< z << " "<< y;
        }
        else{
            cout<< y << " "<< z;
        }
    }
    else if (z==y){
        if (z<x){
            cout<< y << " "<< x;
        }
        else{
            cout<< x << " "<< y;
        }
    }
}
