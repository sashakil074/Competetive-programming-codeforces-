#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n,v,l,r,sum1=0,sum2=0,sum3=0,c=0;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n>>v>>l>>r;

        sum1=abs(l-r)+1;
        sum2=n/v;
        sum3=(sum1/v);

       if(r%v==0 || l%v==0 || (r%v==0 && l==r))
       {
        c=1;

       }

       else
        c=0;

        cout<<sum2-sum3-c<<endl;
        c=0;
    }


 return 0;
}



