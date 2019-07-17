#include<bits/stdc++.h>
using namespace std;

int main()
{

   int q,l,r,sum=0,n;

   cin>>q;

   for(int i=1;i<=q;i++)
   {
       cin>>l>>r;
       n=(r-l)+1;
       if((l+r)%2==0)
       {
           if(l%2!=0)
            l=-l;
           if(r%2!=0)
            r=-r;

           sum=(l+r)/2;
       }
       else if((l+r)%2!=0)
       {
          if(l%2!=0)
            l=-l;
           if(r%2!=0)
            r=-r;

            if(l<0)
            {
                sum=(n/2)*(1);
            }
            else
            {
                sum=(n/2)*(-1);
            }
       }

       cout<<sum<<endl;
       sum=0;
       n=0;
   }
    return 0;
}


