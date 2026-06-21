#include <bits/stdc++.h>
using namespace std;

//  Reverse an array using recursrion, by single pointer method. 
                           
void reverse_array(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse_array(i + 1, arr, n);
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter " << n << " more numbers" << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];
    reverse_array(0, arr, n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}