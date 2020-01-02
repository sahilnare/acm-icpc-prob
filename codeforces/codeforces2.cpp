#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, i;
    cin >> num;
    
    string hate = " that I hate ";
    string love = " that I love ";
    string sent = "I hate";
    
    if(num == 1) {
		sent += " it";
	}
	else {
		for (i = 1; i < num; i++) {
	    	if(i % 2 == 0) {
	    		sent += hate;
			}
			else {
				sent += love;
			}
		}
		sent += "it";
	}
	
	cout << sent;
	
	
    
    return 0;
}
