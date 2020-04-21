#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,k,ans,p,i,j,c,m;
	cin>>n;
	
	vector<long long int>a;
	vector<char>ch;
	
	
	for(i=0;i<n;i++)
	{
	    cin>>p;
	    a.push_back(p);
	}
	
	i=0;j=n-1;p=0;
	while(i<=j)
	{
	    if(a[i]<=a[j])
	    {
	        if(a[i]>p)
	        {
	            ch.push_back('L');
	            
	            p=a[i];
	            //cout<<p<<" ";
	            i++;
	        }
	        else if(a[j]>p)
	        {
	            ch.push_back('R');
	            
	            p=a[j];
	            //cout<<p<<" ";
	            j--;
	        }
	        else
	        break;
	    }
	    else if(a[i]>a[j])
	    {
	        if(a[j]>p)
	        {
	            ch.push_back('R');
	           
	            p=a[j]; //cout<<p<<" ";
	            j--;
	        }
	        else if(a[i]>p)
	        {
	            ch.push_back('L');
	            
	            p=a[i];//cout<<p<<" ";
	            i++;
	        }
	        else
	        break;
	    }
	    else 
	    break;
	}
 
	cout<<ch.size()<<endl;
	for(i=0;i<ch.size();i++)
	cout<<ch[i];
	cout<<endl;
return 0; 
}