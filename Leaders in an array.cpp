#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void findLeaders(int *arr, int n) {
    int maxFromRight = arr[n-1];
    vector<int> v;
    v.push_back(arr[n-1]);
    // cout << arr[n-1] << " ";
    
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] >= maxFromRight) {
            // cout << arr[i] << " ";
            v.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }
    
    vector<int>::iterator it = v.end() - 1;
    for(; it >= v.begin(); it--) {
        cout << *it << " ";
    }
}

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    findLeaders(arr, n);
	    cout << endl;
	}
	
	return 0;
}
