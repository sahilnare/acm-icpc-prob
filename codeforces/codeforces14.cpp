#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int bruh, i;
    cin >> bruh;
    string magnets[bruh];
    int breaks = 0;
    
    for(i = 0; i < bruh; i++) {
    	cin >> magnets[i];
	}
	for(i = 0; i < bruh-1; i++) {
    	if(magnets[i][0] != magnets[i+1][0]) {
    		breaks++;
		}
	}
	
	cout << breaks+1;
    
    return 0;
}
