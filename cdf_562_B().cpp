#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,p=0;

    cin>>n>>m;
    int a[m],b[m];

     for(int i=0;i<m;i++)
     {
         cin>>a[i]>>b[i];
     }

     x=a[0];y=b[0];
     for(int i=0;i<m; )
     {
         if(a[i+1]==x || a[i+1]==y || b[i+1]==x || b[i+1]==y){
            p=1;
            cout<<x<<y<<endl;
             x=a[i+2];y=b[i+2];
           i=i+2;

          }
          else{
           p=0;
           break;
          }

         }

     if(p==1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;


    return 0;
}



