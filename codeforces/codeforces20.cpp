#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i, j, sum = 0,n;
    bool breaker = true;
    vector<int> A;
    for(i = 0; i < 4; i++) {
    	cin >> n;
    	A.push_back(n);
    	sum += A[i];
	}
    
    if(sum % 2 == 0) {
		if(breaker) {
			for(i = 0; i < 4; i++) {
		    	if(A[i] > sum/2) {
		    		cout << "NO" << endl;
		    		breaker = false;
		    		break;
				}
				else if(A[i] == sum/2) {
					cout << "YES" << endl;
					breaker = false;
					break;
				}
			}
		}
		if(breaker) {
			for(i = 0; i < 4; i++) {
				if(breaker) {
					for(j = 0; j < 4; j++) {
						if(i != j) {
							if(A[i] + A[j] == sum/2) {
								cout << "YES" << endl;
								breaker = false;
								break;
							}
						}
					}
				}
			}
		}
	}
	else {
		cout << "NO" << endl;
		breaker = false;
	}
	
	
	if(breaker) {
		cout << "NO" << endl;
	}

    
    return 0;
}
