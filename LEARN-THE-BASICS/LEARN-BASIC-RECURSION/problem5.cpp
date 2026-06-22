#include <bits/stdc++.h>
using namespace std;

// problem: print n to 1  by not using f(i - 1, n), but f(i + 1, n) could be used,(solve by backtracking)

void f(int i, int n)
{
    if (i > n)
        return;
    f(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    f(1,n);
    return 0;
}