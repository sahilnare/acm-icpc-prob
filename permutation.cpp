#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> permutation;
	for (int i = 0; i < 4; i++) {
		permutation.push_back(i);
	}
	do {
		for(auto it = permutation.begin(); it < permutation.end(); it++) {
			cout << *it << " ";
		}
		cout << "\n";
	} while (next_permutation(permutation.begin(),permutation.end()));
    
    return 0;
}
