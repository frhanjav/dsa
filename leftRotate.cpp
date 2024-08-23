#include <bits/stdc++.h>
using namespace std;

void leftR(vector<int> &arr, int n) {
    int first = arr[0];
    for (int i = 0;i<n-1;i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}

int main() {
    int n;
    int input;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i<n; i++) {
        cin >> input;
        arr.push_back(input);
    }
    leftR(arr, n);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}