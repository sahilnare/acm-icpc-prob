#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int size, p, min;
    cin >> size;
    int arr[size];
    int i = 0, j, key;
    p = size;
    while(p > 0) {
    	cin >> arr[i];
    	i++;
    	p--;
	}
	
	for (i = 1; i < size; i++) {
		key = arr[i];
		j = i;
		while(j > 0 && arr[j-1] > key) {
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = key;
	}
	
	for(i = 0; i < size; i++) {
		cout << arr[i] << "\n";
	}
	
	return 0;
}
