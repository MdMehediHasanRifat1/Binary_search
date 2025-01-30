#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,l,h,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        int a[n+10];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("Case %d:\n",i);
        while(q--)
        {
            scanf("%d%d",&l,&h);
            int low=lower_bound(a,a+n,l)-a;
            int high=upper_bound(a,a+n,h)-a;
            printf("%d\n",high-low);
        }
    }
    return 0;
}