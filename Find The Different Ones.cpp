#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    ll a[n];
	    cin>>a[0];
	    vector<ll>v;
	    for(i=1;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]!=a[i-1])
	            v.push_back(i);
	    }
	    n=v.size();
	    ll q;
	    cin>>q;
	    while(q--)
	    {
	        ll l,r;
	        cin>>l>>r;
	        ll ind=lower_bound(v.begin(),v.end(),l)-v.begin();
	        if(n>0&&ind<n&&v[ind]<r)
	            cout<<v[ind]<<" "<<v[ind]+1<<endl;
	        else
	            cout<<-1<<" "<<-1<<endl;
	    }
	    
	}
	return 0;

}
