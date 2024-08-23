#include <bits/stdc++.h>
using namespace std;

void move(vector<int> &arr, int n) {
    int j;
    for (int i =0; i<n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    for (int i = j+1; i<n;i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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
    move(arr, n);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}