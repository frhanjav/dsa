#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for (int i= 0; i<n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int largest = 0;
    int digit1 = 0;
    int digit2 = 0;
    int least = 10;
    int freq = 0;
    for (auto it : mpp) {
        if (it.second > freq) {
            largest = it.second;
            digit1 = it.first;
        }
        if (it.second < freq) {
            least = it.second;
            digit2 = it.first;
        }
        cout << it.first << " -> " << it.second << endl; 
    }

    cout << "Highest : " << digit1 << " -> " << largest << endl;
    cout << "least : " << digit2 << " -> " << least << endl;
}