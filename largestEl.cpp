#include <bits/stdc++.h>
using namespace std;

int largestEl(vector<int> &arr, int num) {
    int largest = arr[0];
    for (int i = 1; i<num; i++) {
        if (arr[i] > arr[0]) largest = arr[i];
    }
    return largest;
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

    int L = largestEl(arr, n);
    cout << L;
    return 0;
}