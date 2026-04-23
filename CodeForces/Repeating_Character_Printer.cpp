// Repeating Character Printer
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=2; i*i <= num;++i){
        if(num % i == 0)
            cout<<"it is not";
        else
            cout<<"it is";
    }
}
