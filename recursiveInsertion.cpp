#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int n, int i, int arr[]) {
    if (i == n) return;
    int j = i;
        while(j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j-1];
            arr [j-1] = arr[j];
            arr [j] = temp;

            j--;
        }
    insertion_sort(n, i+1, arr);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion_sort(n, 0, arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}