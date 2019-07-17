#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i=0,c=0,j=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
        if(i+j==k)
        {
            c++;
        }
        else
            c=c+0;
        }
    }
    cout<<c<<endl;

    return 0;

}
