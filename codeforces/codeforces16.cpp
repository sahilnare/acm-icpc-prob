#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int red, blue;
    cin >> red >> blue;
    int same = 0, diff = 0;
    
    
    while(red > 0 && blue > 0) {
    	red--;
    	blue--;
    	diff++;
	}
	
	while(red > 1) {
		red -= 2;
		same++;
	}
	while(blue > 1) {
		blue -= 2;
		same++;
	}
	
	cout << diff << " " << same;
    
    return 0;
}
