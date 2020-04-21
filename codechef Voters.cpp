#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n1,n2,n3,n,i;
	cin>>n1>>n2>>n3;
	vector <long long int> v;
	long long int a[1000000]={0};
	while(n1--)
	{
	    cin>>n;
	    a[n]++;
	}
	while(n2--)
	{
	    cin>>n;
	    a[n]++;
	}
	while(n3--)
	{
	    cin>>n;
	    a[n]++;
	}
	for(i=0;i<1000000;i++)
	{
	    if(a[i]>=2)
	    v.push_back(i);
	}
	cout<<v.size()<<endl;
	for(i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	return 0;
}
