#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0  ){
            count++;
            if(n/i != i){
                count++;
            };
        };
    };
    if(count == 2) return true;
    return false;
};

int main() {
    int n;
    cout << "Enter a number to check whether is it a prime number or not" << endl;
    cin >> n;
    bool result = isPrime(n);
    if(result == true){
        cout<< n << " " << "is a prime number";
    }else{
        cout<< n << " " << "is not a prime number";
    };
    return 0;
}