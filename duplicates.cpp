#include <bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int n) {
    int i = 0;
    for(int j = 1; j<n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i;
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
    int k = sorted(arr, n);
    for(int i = 0; i<=k; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}