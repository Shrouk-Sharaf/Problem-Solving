// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    int largest = 0;
    int smallest = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if (v[i] > v[largest])
            largest = i;
        if (v[i] < v[smallest])
            smallest = i;
    }
    swap(v[largest], v[smallest]);
    for(int i=0; i<n; i++)
        cout << v[i] << " ";
}
