#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sumx=0,sumy=0,suma=0,sumb=0,x,y,a,b,sum1=0,sum2=0;
    cin>>n;

   for(int i=1;i<=n;i++)
   {
      cin>>x>>y;
       sumx=sumx+x;
       sumy=sumy+y;
   }
    for(int i=1;i<=n;i++)
   {
      cin>>a>>b;
       suma=suma+a;
       sumb=sumb+b;
   }
   sum1=(sumx+suma)/n;
   sum2=(sumy+sumb)/n;
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}


