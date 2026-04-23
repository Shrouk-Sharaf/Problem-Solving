// Sum
#include<iostream>
using namespace std;
int main(){
    int a, b, c , T;
    cin >> T;
    while(T>0){
        cin >> a >> b >> c;
        if(a+b == c || a+ c == b|| b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO"<< endl;
        T -= 1;
    }
}
