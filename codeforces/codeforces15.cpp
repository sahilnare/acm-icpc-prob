#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int fri, maxh, i;
    cin >> fri >> maxh;
    int height;
    int width = 0;
    for(i = 0; i < fri; i++) {
    	cin >> height;
    	if(height > maxh) {
			width += 2;
		} else {
			width++;
		}
	}
	
	cout << width;
    
    return 0;
}
