#include <bits/stdc++.h>
using namespace std;

int subarr2(vector<int> &arr, int n, int k) {
  int len = 0;
    for (int i = 0; i<n; i++) {
      int sum = 0;
      for (int j = i; j<n; j++) {
          sum += arr[j];
        if (sum == k) {
          len = max(len, j - i +1);
        }
      }
    }
    return len;
}

int main() {
    int n;
    int input;
    cout << "Enter length of array : " << endl;
    cin >> n;
    vector<int> arr;
    cout << "Enter elements of the array : " << endl;
    for (int i = 0; i<n; i++) {
        cin >> input;
        arr.push_back(input);
    }
    cout << "Enter the sum of the subarray : " << endl;
    int k;
    cin >> k;
    int L = subarr2(arr, n, k);
    cout << "Length of the subarray is : " << L << endl;
    return 0;
}