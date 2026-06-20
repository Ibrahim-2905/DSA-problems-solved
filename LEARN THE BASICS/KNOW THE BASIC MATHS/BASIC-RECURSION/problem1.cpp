// Print name N times using recursion
#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i > n) return;
    cout << "Ibrahim" << endl;
    f(i + 1, n);
};

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    f(1, n);
    return 0;
}