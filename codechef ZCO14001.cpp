#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define mod 1000000007
#define pb push_back

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,h,i,in,il,j,c;
    cin>>n>>h;
    int a[n+1]={0};
    for(i=1;i<=n;i++)
    cin>>a[i];
    in=1;il=0;
    while(true)
    {
        cin>>c;
        if(c==1)
        {
            if(in==1)
            continue;
            else
            in--;
        }
        else if(c==2)
        {
            if(in==n)
            continue;
            else
            in++;
        }
        else if(c==3)
        {
            if(il==1)
            continue;
            else
            {
                if(a[in]==0)
                continue;
                else
                {
                a[in]--;
                il=1;
                }
            }
        }
        else if(c==4)
        {
            if(il==0)
            continue;
            else
            {
                if(a[in]==h)
                continue;
                else
                {
                a[in]++;
                il=0;
                }
            }
        }
        else if(c==0)
        break;
    }
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
	return 0;
}
