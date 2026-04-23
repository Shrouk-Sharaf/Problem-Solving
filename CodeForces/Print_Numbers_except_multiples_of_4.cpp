// Print Numbers (except multiples of 4)
#include<iostream>
using namespace std;
int main(){
    for(int x = 0; x < 20; x++){
        if (x%4 == 0){
            continue;
        }
        else{
            cout<< x<<endl;
        }
    }
}
