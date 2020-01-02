#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, i, j;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n, 'A'));
    
    for(i = 0; i < n; i++) {
    	for(j = 0; j < n; j++) {
    		if((i + j) % 2 == 0) {
    			board[i][j] = 'W';
			}
			else {
				board[i][j] = 'B';
			}
		}
	}
	
	for(i = 0; i < n; i++) {
    	for(j = 0; j < n; j++) {
    		cout << board[i][j];
    	}
    	cout << "\n";
    }
    
    
    return 0;
}
