#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll count(ll n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) 
    { 
        if (n % i == 0) 
        { 
            
            if (n / i == i) 
            cnt++; 
  
            else 
            cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,i,j,x,k;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        x=a[0]*a[n-1];
        j=0;
        k=count(x);
        for(i=0;i<n;i++)
        {
           if(x%a[i]==0)
           j++;
        }
        if(j==n&&j==k-2)
        cout<<x<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}