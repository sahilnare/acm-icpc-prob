#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string robots;
    cin >> robots;
    int len = robots.length();
    int digit, i, j = 0, k;
    bool safe = true;
    
    for(i = 0; i < len; i++) {
    	if(isdigit(robots[i])) {
    		j++;
		}
	}
	int torob = j;
	int range[torob][2] = {};
	j = 0;
    
    for(i = 0; i < len; i++) {
    	if(isdigit(robots[i])) {
    		range[j][0] = i;
    		range[j][1] = stoi(robots.substr(i, 1));
    		j++;
		} else {
			robots.replace(i, 1, "0");
		}
	}
	
	for(i = 0; i < torob; i++) {
		j = range[i][0] + range[i][1];
		k = range[i][0] - range[i][0];
		if(j < len) {
			robots.replace(j, 1, "5");
		}
		if(k >= 0) {
			robots.replace(k, 1, "5");
		}
	}
	
	
	for(i = 0; i < torob; i++) {
		for(j = range[i][0] + 1; j <= range[i][0] + range[i][1] && j < len; j++) {
			if(stoi(robots.substr(j, 1)) != 0) {
				safe = false;
				break;
			}
		}
		for(j = range[i][0] - 1; j >= range[i][0] - range[i][1] && j >= 0; j--) {
			if(stoi(robots.substr(j, 1)) != 0) {
				safe = false;
				break;
			}
		}
		if(!safe) {
			break;
		}
	}
	
	
	if(safe) {
		cout << "safe";
	} else {
		cout << "unsafe";
	}
	
    
    return 0;
}
