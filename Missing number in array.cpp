#include <iostream>
using namespace std;

/* This function will return the missing number. Idea is to find sum of first N numbers 
and subtract it from sum of elements of the array*/
int findMissingNumber(int arr[], int n, int arraySum) {
    
    int sum1ToN = (n*(n+1))/2;
    return (sum1ToN - arraySum);
    
}

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n];
	    int arraySum = 0; //Stores sum of elements of array
	    for(int i = 0; i < n-1; i++) {
	        cin >> arr[i];
	        arraySum += arr[i];
	    }
	    cout << findMissingNumber(arr, n, arraySum) << endl;
	}
	return 0;
}
