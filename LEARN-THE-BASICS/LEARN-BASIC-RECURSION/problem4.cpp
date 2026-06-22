#include <bits/stdc++.h>
using namespace std;

// problem: print  1 to n by not using f(i + 1, n), but f(i - 1, n) could be used,(solve by backtracking)

void f(int i, int n)
{
    if (i < 1)
        return;
    f(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    f(n,n);
    return 0;
}