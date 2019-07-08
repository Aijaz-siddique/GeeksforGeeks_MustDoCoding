#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string checkPythagoreanTriplet(long *arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = pow(arr[i], 2);
    }
    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i--) {
        int j = 0, k = i-1;
        while(j < k) {
            if(arr[i] == arr[j] + arr[k]){
                return "Yes";
            }
            if(arr[j] + arr[k] > arr[i]){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return "No";
}

// 15
// 4 49 1 59 19 81 97 99 82 90 99 10 58 73 23


int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    long arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    cout << checkPythagoreanTriplet(arr, n) << endl;
	}
	return 0;
}
