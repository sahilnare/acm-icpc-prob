#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int num;
    int count;
    while (n > 0) {
    	cin >> num;
    	if(num % k == 0) {
    		count++;
		}
		n--;
	}
	cout << count;
    return 0;
}
