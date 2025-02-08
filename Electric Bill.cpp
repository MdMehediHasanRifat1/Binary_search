#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bill_to_unit(ll bill)
{
    ll unit=0;
    if(bill>=200)
    {
        unit=100;
        bill-=200;
    }
    else
    {
        unit=bill/2;
        bill=0;
    }
    if(bill>=29700)
    {
        unit+=9900;
        bill-=29700;
    }
    else
    {
        unit+=(bill/3);
        bill=0;
    }
    if(bill>=4950000)
    {
        unit+=990000;
        bill-=4950000;
    }
    else
    {
        unit+=(bill/5);
        bill=0;
    }
    if(bill>0)
    {
        unit+=(bill/7);
        bill=0;
    }
    return unit;
}

ll unit_to_bill(ll unit)
{
    ll bill;
    if(unit>=100)
    {
        bill=200;
        unit-=100;
    }
    else
    {
        bill=unit*2;
        unit=0;
    }
    if(unit>=9900)
    {
        bill+=(9900*3);
        unit-=9900;
    }
    else
    {
        bill+=(unit*3);
        unit=0;
    }
    if(unit>=990000)
    {
        bill+=(990000*5);
        unit-=990000;
    }
    else
    {
        bill+=(unit*5);
        unit=0;
    }
    if(unit>0)
    {
        bill+=(unit*7);
        unit=0;
    }
    return bill;
}

int main()
{
    while(true)
    {
        ll a,b,ans=0;
        cin>>a>>b;
        if(a==0&&b==0)
            break;
        ll l,h,mid,temp;
        l=0;
        h=bill_to_unit(a);
        temp=h;
        while(l<h)
        {
            mid=(l+h)/2;
            ll x,y;
            x=unit_to_bill(mid);
            y=unit_to_bill(temp-mid);
            if(y-x>b)
            {
                l=mid;
            }
            else if(y-x<b)
            {
                h=mid;
            }
            else
            {
                ans=unit_to_bill(mid);
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}