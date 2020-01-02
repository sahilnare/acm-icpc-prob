#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int limak, bob, years = 0;
    cin >> limak >> bob;
    while(limak <= bob) {
    	limak *= 3;
    	bob *= 2;
    	years++;
	}
	cout << years;
    
    return 0;
}
