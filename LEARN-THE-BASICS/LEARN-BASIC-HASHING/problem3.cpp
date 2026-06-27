#include <bits/stdc++.h>
using namespace std;
// Character hashing by using array of size 256

int main(){
    string s;
    cout << "Enter a string" << endl;
    cin >> s;

    //pre compute

    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cout << "Enter how man times do you want to check the appeareances" << endl;
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the character that you want to check "<< endl;
        cin >> c;
        cout << "The " << c << " is appearing " << hash[c] << " times" << endl;
    }
    return 0;
}
