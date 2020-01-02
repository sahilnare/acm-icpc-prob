#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int fafa;
    cin >> fafa;
    int i, j, emp = 0;
    for(i = 1; i < (fafa/2)+1; i++) {
    	if((fafa-i) % i == 0) {
    		emp++;
		}
	}
	cout << emp;
    
    return 0;
}
