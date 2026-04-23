// J
#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cin>>size;
    cin.ignore();
    string jamal, beshoy;
    getline(cin,jamal);
    getline(cin,beshoy);
    bool flag=true;
    for (int j = 0 ; j < jamal.length()-1;++j) {
        if (beshoy[0] == jamal[j] && beshoy[1] == jamal[j+1] && beshoy[2] == jamal[j+2]){
            flag = true;
            break;
       }
        else
            flag = false;
   }
    if (flag)
        cout<<"YES";
    else
        cout<<"NO";
}
