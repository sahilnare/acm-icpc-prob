#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>

using namespace std;

int main() {
	fast;
    ll test, n, k, i, j, p;
    cin >> test;
    vll sack;
    vll::iterator mini;
	vll::iterator it;
    
    while(test--) {
    	cin >> n >> k;
    	for(i = 0; i < n; i++) {
    		cin >> j;
    		sack.push_back(j);
		}
		sort(sack.begin(), sack.end());
		mini = upper_bound(sack.begin(), sack.end(), k);
		if(mini == sack.end()) {
			cout << accumulate(sack.begin(), sack.end(), 0) << "\n";
//			for(it = sack.begin(); it < sack.end(); it++) {
//				cout << *it << " ";
//			}
//			cout << "\n";
			continue;
		}
		for(it = mini; it < sack.end() - 1; it++) {
//			if(min(*it, *(it+1)) > k) {
//				*(it + 1) -= ( *it - k );
//				*it = k;
//			}
			
			if(*it == *(it + 1)) {
				*it = k;
				*(it + 1) = k;
			} else {
				
			}
		}
//		for(it = sack.begin(); it < sack.end(); it++) {
//			cout << *it << " ";
//		}
//		cout << "\n";
		cout << accumulate(sack.begin(), sack.end(), 0) << "\n";
		sack.clear();
	}
    
    return 0;
}
