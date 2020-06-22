/*JAI SHREE RAM
HAR HAR MAHADEV*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define mod 1000000007
#define pb push_back
#define pob pop_back
#define beg begin
#define gcd __gcd
#define bs binary_search
#define lbd lower_bound
#define ubd upper_bound
#define npr next_permutation
#define ppr prev_permutation
#define bp __builtin_popcountll
#define ff first
#define ss second
#define pi 3.1415926535
#define TEST unsigned long long T; cin>>T; while(T--)
 
const char nl='\n';
const ll MAX=INT_MAX;
const ll MIN=INT_MIN;
 
ll a[100][100];
ll I[100][100];
 
void mul(ll A[][100],ll B[][100],ll m)
{
    ll i,j,k;
    ll res[m][m];
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            res[i][j]=0;
            for(k=0;k<m;k++)
            res[i][j]=res[i][j]+(A[i][k]*B[k][j])%mod;
            res[i][j]=res[i][j]%mod;
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        A[i][j]=res[i][j];
    }
}
 
void power(ll A[][100], ll m, ll n)
{
    ll i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            I[i][j]=1;
            else
            I[i][j]=0;
        }
    }
    
    while(n)
    {
        if(n%2==1)
        {
            mul(I,A,m);
            n--;
        }
        else
        {
            mul(A,A,m);
            n=n/2;
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        A[i][j]=I[i][j];
    }
}
 
void print(ll A[][100], ll m)
{
    ll i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        cout<<A[i][j]<<" ";
        cout<<nl;
    }
}
 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<fixed<<setprecision(20);
    TEST
    {
        ll m,n,i,j;
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        power(a, m, n);
        print(a,m);
    }
 
return 0;
} 
