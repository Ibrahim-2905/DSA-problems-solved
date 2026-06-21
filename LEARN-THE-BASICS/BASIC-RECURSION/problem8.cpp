#include <bits/stdc++.h>
using namespace std;

// Find the factorial of a number using recursrion. 
// Solving by functional way                           


int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    cout << fact(n);
    return 0;
}