// Chracter hashing by using Map

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string" << endl;
    cin >> s;

    //pre compute

    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << "-->" << it.second << endl;
        }


    
    // int q;
    // cout << "Enter how man times do you want to check the appeareances" << endl;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cout << "Enter the character that you want to check "<< endl;
    //     cin >> c;
    //     cout << "The " << c << " is appearing " << mpp[c] << " times" << endl;
    // }
    return 0;
}
