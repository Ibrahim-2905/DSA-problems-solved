#include <bits/stdc++.h>
using namespace std;

//For small letters characters hashing

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
   

    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int q;
    cout << "Enter how many times do want to check about character appearences." << endl;
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter the character that you want to check" << endl;
        cin >> c;
        cout << c << " is appearing " << hash[c - 'a'] << " times " << endl;
        //fetch
    }

    return 0;
}