// N
#include <iostream>
#include <string>
using namespace std;
int main() {
    string word, new_word;
    long long n;
    cin >> n;
    cin.ignore();
    getline(cin, word);
    for(int i =0; i < n ; ++i){
       if(word[i] == word[i+1])
           continue;
       else
           new_word += word[i];
    }
    cout << new_word;
}
