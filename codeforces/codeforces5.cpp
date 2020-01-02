#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string tableCard;
    string handCards[5];
    int i = 0, j;
    cin >> tableCard;
    while(i < 5) {
    	cin >> handCards[i];
    	i++;
	}
	
	bool play = false;
	
	for(i = 0; i < 5; i++) {
		if(handCards[i][1] == tableCard[1]) {
			play = true;
		}
	}
	
	for(i = 0; i < 5; i++) {
		if(handCards[i][0] == tableCard[0]) {
			play = true;
		}
	}
	
	if(play) {
		cout << "YES";
	} else {
		cout << "NO";
	}
    
    return 0;
}
