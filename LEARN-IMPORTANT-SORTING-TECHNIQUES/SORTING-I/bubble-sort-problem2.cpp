#include <bits/stdc++.h>
using namespace std;

//Sort an array using bubble sort.
// Technique: Push max number to the last by comparing adjacent swaps 

void bubble_sort(int arr[], int n){
     for(int i = n-1; i >= 1; i--){
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            };
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
    bubble_sort(arr, n);
    cout << "The Bubble sorted array is: " << endl;
    for(int i = 0; i < n; i++){
        cout  << arr[i] << " " ;
    }

    return 0;
};












// // again practice
// // Bubble sort - Push maximum to the end by adjacent swap

// #include <bits/stdc++.h>
// using namespace std;

// void bubble_sort(int arr[], int n){
//     for(int i = n-1; i >= 1; i--){
//         for(int j = 0; j <= i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp; 
//             };
//         };
//     };
// };

// int main(){
//     int n;
//     cout << "Enter a number";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     };
//     bubble_sort(arr, n);
//     cout << "The sorted array is" << endl;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     };
// };