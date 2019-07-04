#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*This function will return maximum sum of a contiguous sub array */
int findMaxSum(int arr[], int n) {
    int curr_max = arr[0]; //stores maximum value that can be attain at current point of time
    int maxSoFar = arr[0]; // stores the answer maximum sum so far
    
    for(int i = 1; i < n; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        maxSoFar = max(curr_max, maxSoFar);
    }
    
    return maxSoFar;
}

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    cout <<findMaxSum(arr, n) << endl;
	}
	return 0;
}
