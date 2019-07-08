#include <bits/stdc++.h> 
using namespace std; 

// Function to find next gap. 
int nextGap(int gap) 
{ 
	if (gap <= 1) 
		return 0; 
	return (gap / 2) + (gap % 2); 
} 

void merge(int *arr1, int *arr2, int n, int m) 
{ 
	int i, j, gap = n + m; 
	for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
	{ 
      // comparing elements of the first array. 
      for (i = 0; i + gap < n; i++){
        if (arr1[i] > arr1[i + gap]) {
            swap(arr1[i], arr1[i + gap]); 
        }			
      }


      //comparing elements of both arrays 
      for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]); 
        }			
      }


      if (j < m) 
      { 
        //comparing remaining elements of the second array. 
        for (j = 0; j + gap < m; j++)  {
          if (arr2[j] > arr2[j + gap]) {
              swap(arr2[j], arr2[j + gap]); 
          }				
        }				
		  } 
	} 
} 

int main() 
{ 
//driver code
	int t;
	cin >> t;
	while(t--) {
	    int x, y; cin >> x >> y;
	    int a1[x];
	    for(int i = 0; i < x; i++) cin >> a1[i];
	    int a2[y];
	    for(int i = 0 ; i < y; i++) cin >> a2[i];
	    merge(a1, a2, x, y); //Function to merge two sorted arrays
      
      //printing array 1
    for(int i = 0; i < x; i++) {
        cout << a1[i] << " ";
    }
    //printing array2
    for(int j = 0; j < y-1; j++) {
        cout << a2[j] << " ";
    }
    //printing last element of array2 separately in order to deal with the space after last element
    cout << a2[y-1] << endl;

	}
	
	return 0; 
} 
