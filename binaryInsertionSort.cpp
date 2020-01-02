#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int item, int low, int high) 
{ 
    if (high <= low) 
        return (item > a[low])?  (low + 1): low; 
  
    int mid = (low + high)/2; 
  
    if(item == a[mid]) 
        return mid+1; 
  
    if(item > a[mid]) 
        return binarySearch(a, item, mid+1, high); 
    return binarySearch(a, item, low, mid-1); 
} 

void insertionSort(int a[], int n) 
{ 
    int i, loc, j, k, selected; 
  
    for (i = 1; i < n; ++i) 
    { 
        j = i - 1; 
        selected = a[i]; 
  
        // find location where selected sould be inseretd 
        loc = binarySearch(a, selected, 0, j); 
  
        // Move all elements after location to create space 
        while (j >= loc) 
        { 
            a[j+1] = a[j]; 
            j--; 
        } 
        a[j+1] = selected; 
    } 
} 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size, p, i=0;
    cin >> size;
    int a[size];
    p = size;
    while(p > 0) {
    	cin >> a[i];
    	i++;
    	p--;
	}
  
    insertionSort(a, size); 
  
    for (i = 0; i < size; i++) 
        printf("%d\n",a[i]); 
  
    
    return 0;
}
