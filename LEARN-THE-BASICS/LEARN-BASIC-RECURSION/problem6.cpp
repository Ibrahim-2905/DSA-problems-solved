#include <bits/stdc++.h>
using namespace std;

// Sum of first N numbers using recursion.  
// Solving by parameterized way                           

void f(int i, int sum){
    if(i < 1){
        cout << "The sum of first N number is " <<  sum << endl;
        return;
    };
    f(i-1, sum + i);
}


int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    f(n, 0);
    return 0;
}