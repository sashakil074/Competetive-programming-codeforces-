#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,c=1,j=0,t=0,u=0;

    cin>>n>>m;
    int s=0,a[101],p[101];
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        for(int k=1;k<=m;k++)
        {

            if(l<=k &&  k<=r)
            {
                 s=k;
                break;
            }
            else
            p[t++]=k;


        }
        a[u++]=s;
    }
    //for()

    cout<<m-u<<endl;
    for(int i=0;i<u;i++)
    {
     cout<<p[i]<<" ";
    }

    return 0;
}
