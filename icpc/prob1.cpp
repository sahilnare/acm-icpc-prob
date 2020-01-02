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
	
	string num;
	vi store;
	int test, i, j, a, b, l, fnum, ten;
	
	cin >> test;
	
	while(test--) {
		cin >> num;
		
		l = num.length();
		
		for(i = 0; i < l; i++) {
			fnum = 0;
			ten = 1;
			for(j = l-1; j >= 0; j--) {
				if(j != i) {
					a = stoi(num.substr(j, 1));
					fnum += a*ten;
					ten*=10;
				}
			}
			store.push_back(fnum);
		}
//		for(b = 0; b < store.size(); b++) {
//			cout << store[b] << "\n";
//		}
		cout << "\n";
		cout << *min_element(store.begin(), store.end());
		
		store.clear();
		
		num.clear();
	}
	
	ret;
}
