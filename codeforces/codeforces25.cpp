#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string latin;
    int n, a, b, k, i, ans = 0, z;
    vector <int> count(30, 0);
    string c;
    string abc = "a";
    string sub;
    
    getline(cin, latin);
    cin >> n;
    
    while(n--) {
    	cin >> a;
    	if(a == 1) {
    		cin >> b >> c;
    		latin.replace(b-1, 1, c);
		}
		else {
			cin >> b >> k;
			sub = latin.substr(b-1,k-b+1);
			for(i = 0; i < sub.length(); i++) {
				count[sub[i] - abc[0]]++;
			}
			for(i = 0; i < 30; i++) {
				if(count[i] >= 1) {
					ans++;
					count[i] = 0;
				}
			}
			cout << ans << "\n";
			ans = 0;
		}
	}
    
    return 0;
}
