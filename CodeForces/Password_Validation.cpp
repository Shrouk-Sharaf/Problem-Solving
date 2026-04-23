// Password Validation
#include<iostream>
using namespace std;
int main(){
    int x = 0;
    while (x != 1999){
        cin>>x;
        if (x==1999){
            cout<<"Correct"<<endl;
            return 0;
        }
        else{
            cout << "Wrong"<<endl;
        }
    }
}
