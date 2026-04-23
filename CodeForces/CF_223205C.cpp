// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
#include <iostream>
#include <vector>
using namespace std;
bool odd(int n){
    if(n % 2 != 0) return true;
    return false;
}
bool palindrome(int n){
    vector<int> BinaryRep;
    // binary representation
    while(n > 0){
        BinaryRep.push_back(n % 2);
        n /= 2;
    }
    for(int i = 0; i < BinaryRep.size() / 2; i++){
        if(BinaryRep[i] != BinaryRep[BinaryRep.size() - i - 1]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << (palindrome(n) && odd(n) ? "YES" : "NO");
}
