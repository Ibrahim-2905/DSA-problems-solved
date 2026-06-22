#include <bits/stdc++.h>
using namespace std;

// Sum of first N numbers using recursion.  
// Solving by functional way                           


int f(int n){
    if(n == 0) return 0;
    return n + f(n - 1);
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    cout << f(n);
    return 0;
}