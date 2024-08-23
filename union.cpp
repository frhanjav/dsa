#include <bits/stdc++.h>
using namespace std;

vector<int> unionn(vector<int> &arr1, vector<int> &arr2, int n1, int n2) {
    set <int> s;
    vector <int> unionarr;
    for (int i=0; i<n1; i++) {
        s.insert(arr1[i]);
    }

    for (int i=0; i<n2; i++) {
        s.insert(arr2[i]);
    }
    for (auto & it:s) {
        unionarr.push_back(it);
    }
    return unionarr;

}


int main() {
    cout << "Ar1";
    int n1;
    int input;
    cin >> n1;
    vector<int> arr1;
    for (int i = 0; i<n1; i++) {
        cin >> input;
        arr1.push_back(input);
    }
    cout << "AR2";
    int n2;
    int input2;
    cin >> n2;
    vector<int> arr2;
    for (int i = 0; i<n2; i++) {
        cin >> input2;
        arr2.push_back(input2);
    }
    
    vector <int> unionArray = unionn(arr1, arr2, n1, n2);
    for(auto & val:unionArray) {
        cout << val << " ";
    }
    return 0;
}