#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,c=0;
    cin>>n>>m;
     if(n==m)
        cout<<"0"<<endl;
     else if((n*2)>m)
        cout<<"-1"<<endl;
     else if(m%n==0)
     {
         for(int i=m;i>=n; )
         {
             if(i%2==0)
             {
                 i=i/2;
                 c++;
             }
             if(i%3==0)
                {
                i=i/3;
                c++;
                }

         }
         cout<<c-1<<endl;
     }
  else
    cout<<"-1"<<endl;


    return 0;
}


