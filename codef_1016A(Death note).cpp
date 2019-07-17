#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,s;
    scanf("%lld%lld",&n,&m);
    long long int a[n];
    for(int j=0;j<n;j++)
    {
        scanf("%lld",&a[j]);
    }
    for(int i=0;i<n;i++)
       {
        s=a[i]/m;
        printf("%lld ",s);
        a[i+1]=a[i]+a[i+1]-s*m;
        }
    return 0;
}
