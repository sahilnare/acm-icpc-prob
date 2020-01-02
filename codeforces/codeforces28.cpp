#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string bots;
    int i, j, c, a, b, test;
    int len;
    bool safe = false;
    
    cin >> test;
    
	while(test--) {
		safe = true;
		cin >> bots;
		len = bots.length();
	    
		
			for(i = 0; i < len-1; i++) {
		    	if(bots.substr(i,1) != ".") {
		    		for(j = i+1; j < len; j++) {
		    			if(bots.substr(j,1) != ".") {
		    					a = stoi(bots.substr(i,1));
//		    					cout << a << " ";
		    					b = stoi(bots.substr(j,1));
//		    					cout << b << " ";
		    					if(j - i - 1 < a + b) {
		    						safe = false;
								}
						}
					}
				}
				if(!safe) {
					break;
				}
			}
		
		
		if(safe) {
			cout << "safe" << "\n";
		}
		else {
			cout << "unsafe" << "\n";
		}
		bots.clear();
	}
    
    return 0;
}







