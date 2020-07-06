/*JAI SHREE RAM
HAR HAR MAHADEV*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define mod 1000000007
#define pb push_back
#define mp make_pair
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
 
void print(string a)
{
    ll n,i,k,j,l,g;
    stringstream s(a);
    string word;
    vector <ll> v; 
    while(s>>word)
    v.pb((ll)word.length());
    
    l=1;g=0;
    for(i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        l++;
        else
        l=1;
        if(l>g)
        g=l;
    }
    //for(ll i=0;i<v.size();i++)
    //cout<<v[i]<<" ";
    //cout<<nl;
    cout<<g<<nl;
}
 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<fixed<<setprecision(20);
    
    int t,r;
    cin>>t;
    r=0;t++;
    while(t--)
    {
        r++;
        string a;
        getline(cin, a); 
        if(r>1)
        print(a);
    }
 
return 0;
}  
