#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100009];
ll n,i;
ll lb(ll s)
{
    ll ind=-1;
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]<s)
        {
            ind=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return ind;
}

ll ub(ll s)
{
    ll ind=-1;
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]<=s)
        {
            l=mid+1;
        }
        else
        {
            ind=mid;
            h=mid-1;
        }
    }
    return ind;
}
int main() {
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    ll q;
    cin>>q;
    while(q--)
    {
        ll x=-1,y=-1;
        ll v;
        cin>>v;
        x=lb(v);
        y=ub(v);
        if(x==-1)
            cout<<"X ";
        else
            cout<<a[x]<<" ";
        if(y==-1)
            cout<<"X"<<endl;
        else
            cout<<a[y]<<endl;
    }
    return 0;
}
