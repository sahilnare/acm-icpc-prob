#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string alice;
    cin >> alice;
    int i, a = 0;
    int len = alice.length();
    
    for(i = 0; i < len; i++) {
    	if(alice.substr(i,1) == "a") {
    		a++;
		}
	}
	
	while(len >= a*2) {
		len -= 1;
	}
	
	cout << len;
    
    return 0;
}
