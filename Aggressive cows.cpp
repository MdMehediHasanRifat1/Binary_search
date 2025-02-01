#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100009],n,c,i;
bool isok(ll m)
{
    ll s=a[0],cnt=1;
    i=1;
    while(i<n)
    {
        if(s+m<=a[i])
        {
            s=a[i];
            cnt++;
        }
        i++;
    }
    if(cnt>=c)
        return true;
    else
        return false;
}
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    cin>>n>>c;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll l=0,h=1e10,mid,ans=0;
	    while(l<=h)
	    {
	        mid=(l+h)/2;
	        if(isok(mid))
	        {
	            ans=max(ans,mid);
	            l=mid+1;
	        }
	        else
	        {
	            h=mid-1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;

}
