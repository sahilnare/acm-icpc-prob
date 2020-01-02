#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len, i;
    cin >> len;
    int friends[len+1];
    int receivers[len+1];
    friends[0] = 0;
    receivers[0] = 0;
    
    for(i = 1; i < len+1; i++) {
    	cin >> friends[i];
	}
	for(i = 1; i < len+1; i++) {
    	receivers[friends[i]] = i;
	}
	for(i = 1; i < len+1; i++) {
    	cout << receivers[i] << " ";
	}
    
    return 0;
}
