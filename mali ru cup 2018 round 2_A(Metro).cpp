#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,c=0;

    cin>>n>>s;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    if(a[0]!=1)
    {
       cout<<"NO"<<endl;
    }
    else
     {
     if(a[s-1]==1)
     {
      cout<<"YES"<<endl;
     }
     else if(a[s-1]!=1 && b[s-1]!=1)
     {
      cout<<"NO"<<endl;
     }
     else if(a[n-1]==1 && b[n-1]==1 && b[s-1]==1)
     {
      cout<<"YES"<<endl;
     }
     else
        cout<<"NO"<<endl;
     }

    return 0;
}


