#include <bits/stdc++.h>
using namespace std;

int isGcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    };
    if(a == 0) return b;
    return a;
}

int main(){
    int a;
    int b;
    cout << "Enter two numbers to check GCD:" << endl;
    cin >> a;
    cin >> b;
    int result = isGcd(a,b); 
    cout << "The GCD of " << a <<  " and " << b <<  " " << "is " << result;
    return 0;
}