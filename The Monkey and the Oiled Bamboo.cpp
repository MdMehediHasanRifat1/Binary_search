#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	
	ll t;
	cin>>t;
	for(ll tc=1;tc<=t;tc++)
	{
	    ll ans=1e10,mx=0;
	    ll n,i;
	    cin>>n;
	    ll a,b;
	    cin>>a;
	    vector<ll>v;
	    v.push_back(a);
	    mx=max(mx,a);
	    b=a;
	    for(i=1;i<n;i++)
	    {
	        cin>>a;
	        v.push_back(a-b);
	        mx=max(mx,a-b);
	        b=a;
	    }
	    ll m=v.size();
	    ll l=mx,h=1000000008,mid;
	    while(l<=h)
	    {
	        mid=(l+h)/2;
	        bool ok=1;
	        ll temp=mid;
	        for(ll j=0;j<m;j++)
	        {
	            if(mid>mx)
	            {
	                break;
	            }
	            if(v[j]==mid)
	            {
	                mid--;
	            }
	            else if(mid<v[j])
	            {
	                ok=0;
	                l=temp+1;
	                break;
	            }
	        }
	        if(ok)
	        {
	            ans=min(ans,temp);
	            h=temp-1;
	        }
	    }
	    printf("Case %lld: %lld\n",tc,ans);
	}
	return 0;
}
