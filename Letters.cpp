#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,m,v,i,r;
	cin>>n>>m;
	ll b[m];
	vector<ll>a;
	a.push_back(0);
	for(i=0;i<n;i++)
	{
		cin>>v;
		a.push_back(a[i]+v);
	}
	for(i=0;i<m;i++)
	{
	    cin>>b[i];
	    auto it=lower_bound(a.begin(),a.end(),b[i]);
	    r=(it-a.begin());
	    cout<<r<<" "<<b[i]-a[r-1]<<endl;
	}
}
int main()
{
		solve();
}