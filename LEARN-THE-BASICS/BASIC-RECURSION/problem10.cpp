#include <bits/stdc++.h>
using namespace std;

//  Reverse an array using recursrion by two pointer method. 
                           
void reverse_array(int l, int r, int arr[]){
    if(l > r) return;
    swap(arr[l], arr[r]);
    reverse_array(l+1, r-1, arr);
};

int main(){
    int n;

    cout << "Enter a number" << endl;

    cin >> n;

    cout << endl;

    int arr[n];

    cout << "Enter " << n << " more numbers" << endl;

    for(int i = 0; i < n ; i++) cin >> arr[i];

    reverse_array(0, n-1, arr);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}