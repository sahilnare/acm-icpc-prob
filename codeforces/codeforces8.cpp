#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string flight;
    int len;
    cin >> len >> flight;
    int sf = 0;
    int fs = 0;
    int i;
    for(i = 0; i < len-1; i++) {
    	if(flight.substr(i, 2) == "SF") {
    		sf++;
		}
		else if(flight.substr(i, 2) == "FS") {
			fs++;
		}
	}
	if(sf > fs) {
		cout << "YES";
	} else {
		cout << "NO";
	}
    
    return 0;
}
