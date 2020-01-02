#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test, n, i, j, t, p;
    cin >> test;
    bool ans = false;
    
    while(test--) {
    	vector <int> tzfe;
    	cin >> n;
    	for(i = 0; i < n; i++) {
    		cin >> p;
    		tzfe.push_back(p);
		}
		sort(tzfe.begin(), tzfe.end());
		vector<int>::iterator it;
		it = find(tzfe.begin(), tzfe.end(), 2048);
	
		if(it != tzfe.end()) {
			ans = true;
		}
		else {
			for(i = 0; i < tzfe.size() - 1; i++) {
				if(tzfe[i] == tzfe[i + 1]) {
					tzfe.erase(tzfe.begin() + i);
					tzfe[i] = 2*tzfe[i];
					if(tzfe[i] == 2048) {
						ans = true;
						break;
					}
					sort(tzfe.begin() + i, tzfe.end());
					i--;
				}
			}
		}
		
//		it = find(tzfe.begin(), tzfe.end(), 2048);
//		if(it != tzfe.end()) {
//			ans = true;
//		}
		
		if(ans) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		ans = false;
	}
    
    
    return 0;
}







