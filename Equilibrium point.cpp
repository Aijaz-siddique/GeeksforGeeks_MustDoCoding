#include <iostream>
using namespace std;

int findEquilibrium(int *arr, int n) {
    if(n == 1) {
        return 1;
    }
    int leftSum = 0;
    int rightSum = 0;
    for(int i = 1; i < n; i++) {
        rightSum += arr[i];
    }
    // cout << "rightSum = " << rightSum << endl;
    for(int i = 0, j = 1; j < n; j++, i++) {
        rightSum -= arr[j];
        leftSum += arr[i];
        if(rightSum == leftSum) {
            return i+2;
        }
    }
    return -1;
}

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    cout << findEquilibrium(arr, n) << endl;
	}
	return 0;
}
