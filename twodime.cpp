#include <bits/stdc++.h>
using namespace std;

int twod(const vector<vector<int> >& arr, int row, int col) {
  int maxRow = -1;
  int maxCount = 0;

  for (int i = 0; i<row; i++) {
    int count = 0;
    for (int j = 0; j<col; j++) {
      if (arr[i][j] == 1) {
        count++;
      }
      if (count > maxCount) {
        maxCount = count;
        maxRow = i;
      }
    }
  }
  return maxRow;
}

int main() {
    int row, col;
    cout << "Enter rows and columns: " << endl;
    cin >> row >> col;
    vector<vector<int> > arr(row, vector<int>(col));
    cout << "Enter elements of the array : " << endl;
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
          cin >> arr[i][j];
        }
    }
    int maxRow = twod(arr, row, col);

    if (maxRow != -1) {
        std::cout << "Row with maximum number of 1's: " << maxRow << std::endl;
    } else {
        std::cout << "No 1's found in the array." << std::endl;
    }

    return 0;
}