#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num[4];
    int i, j, k;
    
    cin >> num[0] >> num[1] >> num[2] >> num[3];
    
    int max = -1;
    int maxind = 0;
    
    for(i = 0; i < 4; i++) {
    	if(num[i] > max) {
    		max = num[i];
    		maxind = i;
		}
	}
	
	int ans[3];
	k = 0;
	
	for(j = 0; j < 4; j++) {
		if(j != maxind) {
			ans[k] = num[maxind] - num[j]; 
			k++;
		}
	}
	
	for(j = 0; j < 3; j++) {
		cout << ans[j] << " ";
	}
    
    return 0;
}
