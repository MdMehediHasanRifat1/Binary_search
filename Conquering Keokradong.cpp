#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[1010],n,k,i,j,mx;

bool isok(ll p)
{
	ll c=0;
	if(p<mx)
		return false;
	else
	{
		ll sum=0;
		for(i=0;i<n+1;i++)
		{
			if(sum+a[i]>p)
			{
				c++;
				sum=a[i];
			}
			else
			{
				sum+=a[i];
			}
		}
	}
	if(c<=k)
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
		mx=0;
		cin>>n>>k;
		for(i=0;i<n+1;i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
		}
		ll l=mx,h=1e10,mid,ans=-1;
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
		ll sum=0,count=0,needtocombine=(n-k);
		sum=a[0];
		for(i=1;i<n+1;i++)
		{
			if(needtocombine>=0)
			{
				if(sum+a[i]<=ans&&needtocombine>0)
				{
					sum+=a[i];
					needtocombine--;
				}
				else 
				{
					cout<<sum<<endl;
					sum=a[i];
				}
			}
			else
			{
				cout<<a[i]<<endl;
			}
		}
		if(count<=k&&sum>0)
		{
			count++;
			cout<<sum<<endl;
		}

	}
	return 0;
}