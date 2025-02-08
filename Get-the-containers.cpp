#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100009];
ll n,m,i,j;
bool isok(ll x)
{
	ll sum=0;
	ll cnt=1;
	bool f=1;
	for(i=0;i<n;i++)
	{
		if(sum+a[i]<=x)
		{
			sum+=a[i];
		}
		else
		{
			if(a[i]>x)
			{
				f=0;
				break;
			}
			sum=a[i];
			cnt++;
		}
	}
	if(cnt<=m&&f)
		return true;
	else
		return false;
}
int main()
{
	int t,tc;
	cin>>t;
	for(tc=1;tc<=t;tc++)
	{
		ll ans=0;
		cin>>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		ll l=0,h=1e10,mid;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(isok(mid))
			{
				ans=mid;
				h=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		printf("Case %d: %lld\n",tc,ans);
	}
	return 0;
}