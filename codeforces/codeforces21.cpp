#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
    long long	int n,k,x,j,a,b,l;
    	cin>>n>>k;
    	vector<long long int> v;
    	for(int i=0; i<n; i++)
		{
    		cin>>x;
    		v.push_back(x);
		}
		for(int i=0; i<k; i++)
		{
			j=i%n;
			l=n-(i%n)-1;
			a=v[j];
			b=v[l];
			v[j] = a^b;
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	}
	return 0;
}
