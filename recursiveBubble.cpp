#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n) {
    if (n == 1) return;
    int swap = 0;
    for (int j=0; j<=n-2;j++) {
        if (arr[j] > arr[j+1]) {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            swap = 1;
        }
        if (swap == 0) return;
    }
    
    bubble(arr, n-1);

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}