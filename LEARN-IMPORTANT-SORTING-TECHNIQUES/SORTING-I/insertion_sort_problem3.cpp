// Take one element at a time and insert it into its correct position in the already sorted left part of the array
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
       int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        };
    };
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter an array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    cout << "The insertion sorted array is: "<< endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
};