#include <bits/stdc++.h>
 
using namespace std;

vector <int> subset;

void search(int k) {
	if (k == 4) {
		for(auto it = subset.begin(); it < subset.end(); it++) {
			cout << *it << " ";
		}
		cout << "\n";
	} else {
		search(k+1);
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
	}
}

 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> subset;
    
    search(0);
    
    return 0;
}
