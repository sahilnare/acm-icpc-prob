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
    int i, j, min;
    cin >> size;
    int arr[size];
    for(i = 0; i < size; i++) {
    	cin >> arr[i];
	}
	
	for(i = 0; i < size-1; i++) {
		min = i;
		for(j = i + 1; j < size; j++) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
	}
	
	for(i = 0; i < size; i++) {
		cout << arr[i] << "\n";
	}
	
	return 0;
}




