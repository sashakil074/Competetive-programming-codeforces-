#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m=0,countn=0;

    cin>>n;
long long  int minv=n;
    while(n!=0)
    {
    if (n%2==0)
         m=2;
    for (int i=3;i<=n;i+=2)
    {
        if (n%i==0)
               m=i;
        if(m<minv)
            minv=m;
    }
    n=n-m;
    countn++;
    }
    cout<<countn<<endl;
    return 0;
}

