#include <bits/stdc++.h>
using namespace std;

int f(int i, int arr[], int n)
{
    if (i>=n/2) return 1;
    swap (arr[i], arr[n-i-1]);
    f(i+1, arr, n);
    return 1;
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++) cin >> arr[i];
    f(0, arr, n);
    for(int i =0;i<n;i++) cout << arr[i] << " ";
    return 0;
}