#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q, a, b, x, y, i, j, min, a2, b2;
    long long int sum = 0;
    bool clear = false;
    long long int t, k;
    vector <int> p;
    vector <int> ans;
    
    cin >> q;
    while(q--) {
    	cin >> n;
    	ans.resize(n);
    	
    	for(i = 0; i < n; i++) {
    		cin >> t;
    		t = t/100;
    		t = (int)t;
    		p.push_back(t);
		}
		
		sort(p.begin(), p.end());
		
		cin >> x >> a;
		cin >> y >> b;
		
		
		if(x >= y) {
			a2 = a;
			b2 = b;
			while(a-1 < n && !p.empty()) {
				if(ans[a-1] == 0) {
					ans[a-1] = p.back();
					p.pop_back();
				}
				a += a;
			}
			while(b-1 < n && !p.empty()) {
				if(ans[b-1] == 0) {
					ans[b-1] = p.back();
					p.pop_back();
				}
				b += b;
			}
			j = 0;
			while(!p.empty()) {
				if(ans[j] == 0) {
					ans[j] = p.back();
					p.pop_back();
				}
				j++;
			}
		}
		else {
			a2 = a;
			b2 = b;
			while(b-1 < n) {
				if(ans[b-1] == 0) {
					ans[b-1] = p.back();
					p.pop_back();
				}
				b += b;
			}
			while(a-1 < n) {
				if(ans[a-1] == 0) {
					ans[a-1] = p.back();
					p.pop_back();
				}
				a += a;
			}
			j = 0;
			while(!p.empty()) {
				if(ans[j] == 0) {
					ans[j] = p.back();
					p.pop_back();
				}
				j++;
			}
		}
		
		cin >> k;
//		k = k/100;
//		k = (int)k;
		
		min = 0;
		sum = 0;
		for(i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		for(i = 0; i < n; i++) {
			if((i+1) % a2 == 0 && (i+1) % b2 == 0) {
				sum += ((x+y)*ans[i]);
//				cout << sum << " ";
				if(sum >= k) {
					clear = true;
					min = i+1;
					break;
				}
			}
			else if((i+1) % a2 == 0) {
				sum += (x*ans[i]);
//				cout << sum << " ";
				if(sum >= k) {
					clear = true;
					min = i+1;
					break;
				}
			}
			else if((i+1) % b2 == 0) {
				sum += (y*ans[i]);
//				cout << sum << " ";
				if(sum >= k) {
					clear = true;
					min = i+1;
					break;
				}
			}
		}
		
		if(clear) {
			cout << min << "\n";
		} else {
			cout << -1 << "\n";
		}
		
		p.clear();
		ans.clear();
	}
    
    return 0;
}






















