#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int cash, rem;
    cin >> cash;
    long int bills[5] = {1, 5, 10, 20, 100};
    long int ans = 0;
    
    while (cash > 0) {
		if(cash >= bills[4]) {
    		rem = cash % bills[4];
    		ans += (cash - rem) / bills[4];
    		cash = rem;
		}
		else if(cash >= bills[3]) {
    		rem = cash % bills[3];
    		ans += (cash - rem) / bills[3];
    		cash = rem;
		}
		else if(cash >= bills[2]) {
    		rem = cash % bills[2];
    		ans += (cash - rem) / bills[2];
    		cash = rem;
		}
		else if(cash >= bills[1]) {
    		rem = cash % bills[1];
    		ans += (cash - rem) / bills[1];
    		cash = rem;
		}
		else if(cash >= bills[0]) {
    		rem = cash % bills[0];
    		ans += (cash - rem) / bills[0];
    		cash = rem;
		}
		
	}
    cout << ans;
    return 0;
}
