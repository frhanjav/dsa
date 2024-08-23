#include <bits/stdc++.h>
using namespace std;
int multiply(int n)
{
    if (n<1) return 1;
    return n * multiply(n-1);
}

int main()
{
    int a = 3;
    cout << multiply(a) << endl;
}