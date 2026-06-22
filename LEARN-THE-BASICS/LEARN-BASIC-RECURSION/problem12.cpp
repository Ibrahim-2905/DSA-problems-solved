#include <bits/stdc++.h>
using namespace std;

//  Nis given, Write the recursive function which tells which is nth fibonacci number.

int f(int n){
    if(n <= 1) return n;
    int last = f(n-1);
    int s_last = f(n-2);
    return last + s_last;
};
                           

int main(){
    cout << f(4);
    return 0;
}