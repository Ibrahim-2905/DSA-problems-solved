#include <bits/stdc++.h>
using namespace std;

//Sort an array using selection sort.
// Technique: Select minimum and swap 

void selection_sort(int arr[], int n){
     for(int i = 0; i <= n-2; i++){
         int mini = i;
         for(int j = i; j <= n-1; j++){
             if(arr[j] < arr[mini]){
                 mini = j;
             };
         };
         int temp = arr[mini];
         arr[mini] = arr[i];
         arr[i] = temp;
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
    selection_sort(arr, n);
    cout << "The sorted array is: " << endl;
    for(int i = 0; i < n; i++){
        cout  << arr[i] << " " ;
    }

    return 0;
};













// again practice
// find minimum and swap - selection sort
// #include <bits/stdc++.h>
// using namespace std;

// void selection_sort(int arr[], int n){
//     for(int i = 0; i <= n-2; i++){
//         int mini = i;
//         for(int j = i; j <= n-1; j++){
//             if(arr[j] < arr[mini]){
//                 mini = j;
//             };
//         };
//         //swap 
//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//     };
// };

// int main(){
//     int n;
//     cout << "Enter a number" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter an array" << endl;
//     for (int i= 0; i < n; i++){
//         cin >> arr[i];
//     };
//     selection_sort(arr, n);
//     cout << "The sorted array is:" << endl;
//     for(int i= 0; i< n; i++){
//         cout << arr[i] << " " << endl;
//     };
// };