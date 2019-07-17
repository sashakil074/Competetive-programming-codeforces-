#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,k,t,a,b,c,d,m,r;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;

        n=a/d;
        m=n/b;
        r=m*c;
        cout<<n+r<<endl;
        n=0;
        m=0;
        r=0;
    }

 return 0;
}


