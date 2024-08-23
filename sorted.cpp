#include <bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int num) {
    int check = 0;
    for(int i = 1; i<num;i++) {
        if (arr[i-1]<=arr[i]) {
            check = 1;
        }
        else check = 0;
    }
    return check;
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

    int L = sorted(arr, n);
    if (L == 1)
    cout << "sorted";
    else cout << "unsorted";
    return 0;
}