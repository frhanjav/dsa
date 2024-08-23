#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int num) {
    if (num<2) return -1; // if -5,-1,0 then too -1
    int largest = INT_MIN;
    int secondL = INT_MIN;
    for (int i = 0; i<num; i++) {
        if (arr[i]>largest) {
            secondL = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondL && arr[i]!=largest) {
            secondL = arr[i];
        }
    }
    return secondL;
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

    int L = secondLargest(arr, n);
    cout << L;
    return 0;
}

// i =0. 5<max
// . secSmall = max
// . small = 5
//     .
// i=1 7<5 NO
// ELSE IF 7<MAX&& 7not small
// second small = 7
// 
// i =2 4<5
// secSmall =5
// small = 4