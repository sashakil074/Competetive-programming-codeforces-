#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,b,y,c=0,v=0,bt=0,m1,m2;

    cin>>n>>a>>x>>b>>y;
  m1=x;
  m2=y;
    for(int i=1;i<=n;i++)
    {

        if(a==b){
          bt =1;
          break;
        }
        if(m1==a || m2==b)
            break;
         a++;
         if(a>n)
            a=1;
         b--;
         if(b<1)
            b=n;
    }

    if(bt==1)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;


    return 0;
}


