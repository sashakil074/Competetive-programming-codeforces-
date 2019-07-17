#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,c=1,j=0,t=0,u=0;

    cin>>n>>m;
    int s[m],a[m];
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        for(int k=1;k<=m;k++)
        {
            if(l<=k &&  k<=r)
            {
                s[j++]=k;
            }

        }

        }

        for(int t=1;t<=m;t++ )
        {
            for(int i=0;i<j;i++)
        {
            if(s[i]==t)
            {
                c=0;
                break;
            }
            else
                c=1;

        }
        if(c==1)
        {
            a[u++]=t;
        }
    }


    cout<<u<<endl;
    for(int i=0;i<u;i++)
    {
     cout<<a[i]<<" ";
    }

    return 0;
}
