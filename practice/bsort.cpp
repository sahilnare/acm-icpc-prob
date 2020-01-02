#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int size;
    cin >> size;
    int i, j;
    int arr[size];
    bool swapped;
    
    for(i = 0; i < size; i++) {
    	cin >> arr[i];
	}
	
	for(i = 0; i < size-2; i++) {
		swapped = false;
		for(j = 0; j < size-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped) {
			break;
		}
	}
	
	for(i = 0; i < size; i++) {
		cout << arr[i] << "\n";
	}
    
    return 0;
}



