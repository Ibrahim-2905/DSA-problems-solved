#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter an array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter how many times do want to check about numbers appearences." << endl;
    cin >> q;
    while(q--){
        int number;
       cout << "Enter the number that you want to check" << endl;
        cin >> number; 
        cout << number  << " is appearing " << hash[number] << " times " << endl;
    }

    return 0;
}