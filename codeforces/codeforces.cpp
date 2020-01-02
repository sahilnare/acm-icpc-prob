#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    int length;
    cin >> length;
    cin >> str;
    int i, count = 0;
    
    for(i = 0; i < length; i += 2) {
    	if(str[i] == 'a') {
    		if(str[i+1] == 'a') {
    			str.replace(i, 1, "b");
    			count++;
			}
		}
		
		else if(str[i] == 'b') {
    		if(str[i+1] == 'b') {
    			str.replace(i, 1, "a");
    			count++;
			}
		}
	}
	
	cout << count << "\n" << str;
    
    return 0;
}
