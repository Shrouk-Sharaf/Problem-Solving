// Code 3: Character Classification
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    getline(cin, name);
    if (name[0] == 'i' || name[0] == 'c' || name[0] == 'p')
        cout << "Hate";
    else if (name[0] == 'f' || name[0] == 'm' || name[0] == 'r'|| name[0] == 'h'|| name[0] == 'e'|| name[0] == 'a')
        cout << "love";
    else
        cout <<"Normal";
}
