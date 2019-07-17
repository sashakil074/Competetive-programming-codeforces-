#include<bits/stdc++.h>
using namespace std;

int main()
{

   int q,l,r,sum=0;

   cin>>q;

   for(int i=1;i<=q;i++)
   {
       cin>>l>>r;
   for(int j=r;j>=l;j--)
   {
   if(j%2!=0)
    sum=sum-j;
    else
        sum=sum+j;
   }
       cout<<sum<<endl;
       sum=0;
   }
    return 0;
}


