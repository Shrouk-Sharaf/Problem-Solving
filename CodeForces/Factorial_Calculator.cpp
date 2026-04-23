// Factorial Calculator
#include<iostream>
using namespace std;
int main(){
    int num,res=1;
    cin >> num;
    while (num > 0){
        res *= num;
        num--;
    }
    cout << res << endl;
}
