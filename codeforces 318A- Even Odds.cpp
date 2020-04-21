#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,k,ans,p;
	cin>>n>>k;
	if(n%2==0)
	{
	if(k<=n/2)
	ans=(1+((k-1)*2));
	else
	{
	    p=k-n/2;
	    ans=2+(p-1)*2;
	}
	}
	else
	{
	if(k<=(n/2)+1)
	ans=1+(k-1)*2;
	else
	{
	    p=k-((n/2)+1);
	    ans=2+(p-1)*2;
	}
	}
	cout<<ans<<endl;    
return 0; 
}