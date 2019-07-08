#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArrayInGroup(int *arr, int n, int k) {
    for(int i = 0; i < n; i = i+k) {
        int left = i;
        int right = min(i+k-1, n-1);
        while(left < right) {
            swap(arr[left++], arr[right--]);
            // left++; right--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n, k; cin >> n >> k;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    reverseArrayInGroup(arr, n, k);
	    cout << endl;
	}
	return 0;
}
