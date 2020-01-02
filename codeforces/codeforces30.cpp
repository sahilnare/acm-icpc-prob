#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define ret return 0
#define str string
#define SIZE 1001

using namespace std;

int main() {
	fast;
	
	int n, k, i, j, test;
	str rooms, revr;
	cin >> test;
	vi puma;
	vi pumar;
	int cnt;
	
	while(test--) {
		cin >> n;
		cin >> rooms;
		for(i = 0; i < n; i++) {
			if(rooms.substr(i,1) == "0") {
				puma.pb(0);
				pumar.pb(0);
			} else {
				puma.pb(1);
				pumar.pb(1);
			}
		}
		reverse(pumar.begin(), pumar.end());
		cnt = n;
		for(i = 0; i < n; i++) {
			if(puma[i] == 1 || pumar[i] == 1) {
				break;
			}
			cnt--;
		}
		if(cnt <= 0) {
			cout << n << "\n";
		}
		else {
			cout << cnt*2 << "\n";
		}
		puma.clear();
		pumar.clear();
	}
	
	ret;
}
