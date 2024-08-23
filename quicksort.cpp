#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j) {
        while (arr[i] <= pivot && i <=high-1)  {
            i++;
        }
        while (arr[j]> pivot && j>=low+1){
            j--;
        }
        if (i<j) {
        swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if (low<high) {
        int pIndex = partition(arr, low, high);
        quick_sort(arr, low, pIndex-1);
        quick_sort(arr, pIndex+1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int input;
    vector<int> arr;
    for (int i = 0; n > i; i++) {
        cin >> input;
        arr.push_back(input);
    }
    quick_sort(arr ,0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// int main()
// {
//     vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
//     int n = arr.size();
//     cout << "Before Using quick Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     arr = quick_sort(arr);
//     cout << "After Using quick sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }