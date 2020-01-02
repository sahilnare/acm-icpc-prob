#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a = "abcde";
    string c = "ccdef";
    string sub = a.substr(0, 4);
    
    int k = c[0] - a[0];
    
    cout << k << "\n" << sub;
    
    return 0;
}
