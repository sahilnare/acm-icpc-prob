#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len ,i;
    string games;
    cin >> len >> games;
    int anton = 0, danik = 0;
    
    for(i = 0; i < len; i++) {
    	if(games.substr(i, 1) == "A") {
    		anton++;
		}
		else if(games.substr(i, 1) == "D") {
    		danik++;
		}
	}
	if(anton > danik) {
		cout << "Anton";
	} else if(danik > anton) {
		cout << "Danik";
	} else {
		cout << "Friendship";
	}
    
    return 0;
}
