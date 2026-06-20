// Print linearly 1 to  n using recursion
#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i > n) return;
    cout << i << endl;
    f(i + 1, n);
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    f(1, n);
    return 0;
}