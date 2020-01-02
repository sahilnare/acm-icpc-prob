#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q, m, c, x, y;
    int team = 0;
    bool cha = false;
    
    cin >> q;
    
    while(q--) {
    	cin >> c >> m >> x;
    	if(m < c) {
    		cha = false;
    		if(x >= m) {
//    			while(m > 0) {
//	    			x--;
//	    			m--;
//	    			c--;
//	    			team++;
//				}
				team += m;
			}
			else {
//				while(x > 0) {
//					x--;
//	    			m--;
//	    			c--;
//	    			team++;
//				}
				team += x;
				m -= x;
				c -= x;
//				while(m > 0 && c > 1) {
//	    			m--;
//	    			c-=2;
//	    			team++;
//	    			if(m == c) {
//	    				cha = true;
//	    				break;
//					}
//				}
				y = c - m;
				if(m - y >= 0) {
					team += y;
					c -= y*2;
					m -= y;
					team += (m + c)/3;
				}
				else {
					team += m;
				}
//				if(cha) {
//					team += (m + c)/3;
//				}
			}
		}
		else if(m > c) {
			cha = false;
    		if(x >= c) {
//    			while(c > 0) {
//	    			x--;
//	    			m--;
//	    			c--;
//	    			team++;
//				}
				team += c;
			}
			else {
//				while(x > 0) {
//					x--;
//	    			m--;
//	    			c--;
//	    			team++;
//				}
				team += x;
				m -= x;
				c -= x;
//				while(m > 1 && c > 0) {
//	    			c--;
//	    			m-=2;
//	    			team++;
//	    			if(m == c) {
//	    				cha = true;
//	    				break;
//					}
//				}
				y = m - c;
				if(c - y >= 0) {
					team += y;
					m -= y*2;
					c -= y;
					team += (m + c)/3;
				}
				else {
					team += c;
				}
//				if(cha) {
//					team += (m + c)/3;
//				}
			}
		}
		else {
			if(x >= m) {
//				while(m > 0 && c > 0) {
//					m--;
//					c--;
//					x--;
//					team++;
//				}
				team += m;
			}
			else {
//				while(x > 0) {
//					m--;
//					c--;
//					x--;
//					team++;
//				}
				team += x;
				m -= x;
				c -= x;
				team += (m + c) / 3;
			}
		}
		cout << team << "\n";
		team = 0;
	}
    
    return 0;
}
