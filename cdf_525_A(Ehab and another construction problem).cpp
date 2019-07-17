#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,a,b,k=0;


    cin>>x;

    for(int i=1;i<=x;i++)
    {

      for(int j=1;j<=x;j++)
    {
        if((i%j)==0 && (i*j)>x && (i/j)<x)
        {
            a=i;
            b=j;
            k=1;
            break;
        }
    }

    }
    if(k==1)
    {
        cout<<a<<" "<<b<<endl;
    }
    else
     cout<<"-1"<<endl;

return 0;
}



