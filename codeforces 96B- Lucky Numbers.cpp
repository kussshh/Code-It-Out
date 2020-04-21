#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
vector <ll> v;
 
void numbers(ll n, ll f, ll s)
{
    if(n>10000000000)
    return;
    if(f==s)
    v.push_back(n);
    numbers(n*10+4,f+1,s);
    numbers(n*10+7,f,s+1);
}
 
int main() {
	// your code goes here
	ll n,k;
	cin>>n;
	numbers(0,0,0);
	sort(v.begin(),v.end());
	k=lower_bound(v.begin(),v.end(),n)-v.begin();
	cout<<v[k]<<endl;
	return 0;
}