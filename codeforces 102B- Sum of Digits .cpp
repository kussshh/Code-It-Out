#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() { 
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,c,s,m,k,sum;
    char a[100000];
    scanf("%s",a);
    n=strlen(a);
    if(n==1)
    cout<<0<<endl;
    else
    {
        s=0; c=1;
        for(i=0;i<n;i++)
        s=s+(a[i]-'0');
        //cout<<s<<endl;;
        m=s;
        while(s>9)
        {
            sum=0;m=s;
            while(m)
            {
               sum=sum+m%10;
               m=m/10;
            }
            s=sum;
            c++;
        }
        cout<<c<<endl;
    }
return 0;
}