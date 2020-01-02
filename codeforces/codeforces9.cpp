#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len, i;
    string number;
    cin >> len >> number;
    int z = 0, n = 0;
    
    for(i = 0; i < len; i++) {
    	if(number.substr(i,1) == "z") {
    		z++;
		}
		else if(number.substr(i,1) == "n") {
    		n++;
		}
	}
	for(i = 0; i < n; i++) {
		cout << 1 << " ";
	}
	for(i = 0; i < z; i++) {
		cout << 0 << " ";
	}
    
    return 0;
}
