// P
#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    getline(cin,num);
    int len = num.length();
    for (int i=len-1;i>=0;i--){
        if (num[len-1]=='0')
            cout<<num[i-1];
        else
            cout<<num[i];
    }
}
