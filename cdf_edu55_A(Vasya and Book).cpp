#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,x,y,d,m,maxe=0,sum=0;
    cin>>t;
   for(int i=1;i<=t;i++)
   {
       cin>>n>>x>>y>>d;

       if(abs(y-x)%d!=0 && abs(y-1)%d!=0)
       {
           cout<<"-1"<<endl;
       }
       else
        {
        if(abs(y-x)%d==0)
        {
            cout<<abs(y-x)/d<<endl;
        }
        else if(abs(y-x)%d!=0 && abs(y-1)%d==0)
        {
            sum=ceil(((double)abs(x-1)/(double)d))+abs(y-1)/d;
          cout<<sum<<endl;
        }

       }
   }

    return 0;
}

