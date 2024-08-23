#include <bits/stdc++.h>
using namespace std;

void leftR(vector<int> &arr, int n, int k) {
    vector<int> temp(n);
    int i = 0;
    while (k+i < n) {
        temp[i] = arr[k+i];
        i++;
    }
    
    for(int j = n-k; j<n; j++) {
        temp[j] = arr[j - n + k];
    }

    for(int j = 0; j<n; j++) {
        arr[j]= temp[j];
    }
}

void rightR(vector<int> &arr, int n, int k) {
    int temp[n];
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

    int k;
    cout << "no of shift: ";
    cin >> k;

    cout << "1 for left, 2 for right";
    int shift;
    cin >> shift;
    if (shift = 1) {
        leftR(arr, n, k);
    }
    else if (shift = 2) rightR(arr, n, k);
    else {
        cout << "wrong input";
        return 0; 
    }
    
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}