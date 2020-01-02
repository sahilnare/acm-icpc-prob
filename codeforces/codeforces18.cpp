#include <bits/stdc++.h>

using namespace std;

void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    cout << g.size() << "\n";
    for (it = g.begin(); it != g.end(); ++it) 
        cout << *it << ' '; 
    cout << '\n'; 
} 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, msg, con;
    
    deque <int> phone;
    deque<int>::iterator it;
	
	cin >> msg >> con;
	
	for(i = 0; i < msg; i++) {
		cin >> j;
		if(phone.empty()) {
			phone.push_front(j);
		}
		else {
			it = find(phone.begin(), phone.end(), j);
			if(it == phone.end()) {
				if(phone.size() < con) {
					phone.push_front(j);
				}
				else {
					phone.pop_back();
					phone.push_front(j);	
				}
			}
		}
	}
	
	showdq(phone);
    
    return 0;
}











