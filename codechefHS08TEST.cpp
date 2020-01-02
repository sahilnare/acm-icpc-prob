#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int with;
	float bal, ans;
	cin >> with >> bal;
	if(with % 5 == 0) {
		if(with > bal - 0.5) {
			ans = bal;
		} else {
			ans = bal - ((float)with) - 0.5;
		}
	} else {
		ans = bal;
	}
	
	cout << fixed << setprecision(2) << ans; 
		
	return 0;
}
