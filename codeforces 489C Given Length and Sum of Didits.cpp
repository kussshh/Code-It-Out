#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int i,j,n,c,k,m,s,st,r;k=0;
	cin>>m>>s;
	vector <long long int> v,v1;
	n=m;st=s;
	if(m==1&&s==0)
	cout<<"0 0";
	else if(s>9*n||s==0)
	cout<<-1<<" "<<-1;
	
	else
	{
	    for(i=0;i<m;i++)
	    {
	        if(st>=9)
	        {
	            v.push_back(9);
	            st=st-9;
	        }
	        else
	        {
	            r=st%9;
	            v.push_back(r);
	            st=st-r;
	        }
	    }
	    
	    for(i=0;i<m;i++)
	    {
	        if(i)
	        k=0;
	        else
	        k=1;
	        
	        for(j=k;j<=9;j++)
	        {
	            if(s-j<=9*(m-i-1))
	            {
	                v1.push_back(j);
	                s=s-j;
	                break;
	            }
	        }
	    }
	    
	    for(i=0;i<v1.size();i++)
	    cout<<v1[i];
	    cout<<" ";
	    for(i=0;i<v.size();i++)
	    cout<<v[i];
	}
	return 0;
}