#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int low = 0, mid = 0, high = n-1;
	    while(mid <= high) {
	        if(arr[mid] == 0) {
	            swap(arr[mid], arr[low]);
	            low++; mid++;
	        }
	        else if(arr[mid] == 2) {
	            swap(arr[mid], arr[high]);
	            high--;
	           // mid++;
	        }
	        else {
	            mid++;
	        }
	    }
	    for(int i = 0; i < n-1; i++) cout << arr[i] << " ";
	    cout << arr[n-1] << endl;
	}
	return 0;
} 
