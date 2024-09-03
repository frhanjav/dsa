#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> &arr, int n, int k) {
  int low = 0;
  int high = n-1;
  int ans = -1;
  while (low<=high) {
    int mid = (low + high)/2;
    if (arr[mid] <= k) {
      ans = arr[mid];
      low = mid +1;
    }
    else { high = mid -1;
    }
  }
  return ans;
}

int ceil (vector<int> &arr, int n, int k) {
  int low = 0;
  int high = n-1;
  int ans = -1;
  while (low<=high) {
    int mid = (low + high)/2;
    if (arr[mid] >= k) {
      ans = arr[mid];
      high = mid -1;
    }
    else { low = mid +1;
    }
  }
  return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int k) {
	int f = floor(arr, n,k);
	int c = ceil(arr, n, k);
	return make_pair(f, c);
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
    cout << "Enter the element for floor/ceil : " << endl;
    int k;
    cin >> k;
    pair<int, int> ans = getFloorAndCeil(arr, n, k);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;
    return 0;
}