// Prime Number Printer (2 to N)
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=2; i <= x; ++i){
        int flag = 1;
        for(int y=2; y * y <= i; ++y){
            if(i % y == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout << i << " ";
    }
}
