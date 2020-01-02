#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int citi, i;
    cin >> citi;
    int coins[citi];
    int max = -1;
    int spend = 0;
    
    for(i = 0; i < citi; i++) {
    	cin >> coins[i];
    	if(coins[i] > max) {
    		max = coins[i];
		}
	}
	
	for(i = 0; i < citi; i++) {
		spend += (max - coins[i]);
	}
	
	cout << spend;
    
    return 0;
}
