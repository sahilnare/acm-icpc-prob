#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l, r, x, i, j, k, rem, count, dp, ch;
    bool ans = false;
    int num = -1;
    vector <int> pouch;
    
    cin >> l >> r;
    
    for(i = l; i <= r; i++) {
    	pouch.clear();
    	dp = i;
    	ch = i;
    	while(ch > 0) {
    		rem = ch % 10;
    		pouch.push_back(rem);
    		ch = ch/10;
		}
		count = 0;
		for(j = 0; j < pouch.size() - 1; j++) {
			for(k = j+1; k < pouch.size(); k++) {
				if(pouch[j] == pouch[k]) {
					count++;
				}
			}
		}
		if(count == 0) {
			ans = true;
			num = dp;
			break;
		}
	}
	
	if(ans) {
		cout << num;
	} else {
		cout << -1;
	}
    
    
    return 0;
}
