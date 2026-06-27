#include <bits/stdc++.h>
using namespace std;
// Number hashing by using Map (ordred)

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    //pre compute
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cout << "Enter how man times do you want to check the appeareances" << endl;
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number that you want to check "<< endl;
        cin >> number;
        cout << "The " << number << " is appearing " << mpp[number] << " times" << endl;
    }
    return 0;
}
