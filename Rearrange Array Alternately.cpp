#include <iostream>
using namespace std;

/*This function return the array in max min form */
void rearrange(long *arr, int n) {
    
    int max_index = n-1;
    int min_index = 0;
    int max_elt = arr[n-1]+1;
    
    for(int i = 0; i < n; i++){
        
        if(i%2 == 0) {
            arr[i] += (arr[max_index] % max_elt) * max_elt;
            max_index--;
        }
        else {
            arr[i] += (arr[min_index] % max_elt) * max_elt;
            min_index++;
        }
    }
    for (int i = 0; i < n; i++) 
        arr[i] = arr[i] / max_elt; 
}

int main() {
	//code
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    long arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    
	    rearrange(arr, n);
	    
	    for(int i = 0; i < n-1; i++) {
	        cout << arr[i] << " ";
	    }
	    cout << arr[n-1] << endl;
	}
	return 0;
}
