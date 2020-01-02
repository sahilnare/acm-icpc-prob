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
	vector< pair <string, int> > store;
	vector< pair <string, int> > dup;
	vector< pair <string, int> >::iterator it;
	int test, i, j, b, l, n, k;
	int one, zero, datasets;
	string a, s;
	
	cin >> test;
	
	while(test--) {
		cin >> n;
		datasets = 0;
		for(i = 0; i<n; i++) {
			cin >> a >> b;
			store.push_back(make_pair(a, b));
		}
		for(i = 0; i < store.size(); i++) {
			zero = 0;
			one = 0;
			dup.push_back(store[i]);
			for(j = i+1; j < store.size(); j++) {
				if(store[i].first == store[j].first) {
					dup.push_back(store[j]);
					it = store.begin() + j;
					store.erase(it);
				}
			}
			l = dup.size();
			for(k = 0; k < l; k++) {
				if(dup[k].second == 0) {
					zero++;
				}
				else {
					one++;
				}
			}
			if(zero > one) {
				datasets += zero;
			} else {
				datasets += one;
			}
			dup.clear();
		}
		cout << datasets << "\n";
//		for(i = 0; i<n; i++) {
//			cout << store[i].first << " " << store[i].second << "\n";
//		}
	}
	
	ret;
}




