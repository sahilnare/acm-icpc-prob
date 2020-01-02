#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, num, i, rem, ten, ans;
    bool start = true;
    stack<int> s1, s2;
    string str, sub;
    string strans("");
    
    cin >> n >> k >> str;
    
    while(str.length() > 0) {
    	sub = str.back();
    	rem = stoi(sub);
    	s1.push(rem);
    	str.pop_back();
	}
	
	for(i = 0; i < n; i++) {
		if(n == 1) {
			break;
		}
		if(k > 0) {
			if(start) {
				if(s1.top() != 1) {
					k--;
				}
				s1.pop();
				s2.push(1);
				start = false;
			}
			else {
				if(s1.top() != 0) {
					k--;
				}
				s1.pop();
				s2.push(0);
			}
		}
		else {
			s2.push(s1.top());
			s1.pop();
		}
	}
	
	
//	ten = 0;
	ans = 0;
	if(n > 1) {
		for(i = 0; i < n; i++) {
//			ans += s2.top() * pow(10, ten);
			ans = s2.top();
			strans.append(to_string(ans));
			s2.pop();
//			ten++;
		}
	}
	if(n == 1) {
		if(k == 0) {
			ans = s1.top();
			strans.append(to_string(ans));
		}
		else {
			ans = 0;
			strans.append(to_string(ans));
		}
	}
	reverse(strans.begin(), strans.end());
	cout << strans;
	
	return 0;
}







