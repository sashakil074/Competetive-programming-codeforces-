#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,k,c,d,e,f;
    int t,i;


    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n>>a>>b;


       if(n==1)
       {
        cout<<a<<endl;
       }
       else if(a<b)
       {
           if(n%2==0)
           {
               c=n*a;
               d=(n/2)*b;
             cout<<min(c,d)<<endl;
           }
           else
           {
             e=n*a;
             f=((n/2)*b)+a;
             cout<<min(e,f)<<endl;
           }

       }
       else if(a==b)
       {
          if(n%2==0)
           {
               c=n*a;
               d=(n/2)*b;
             cout<<min(c,d)<<endl;
           }
           else
           {
             e=n*a;
             f=((n/2)*b)+a;
             cout<<min(e,f)<<endl;
           }
       }
  else{
     if( n%2==0)
     {
      c=n*a;
               d=(n/2)*b;
             cout<<min(c,d)<<endl;
     }
     else if(n%2!=0)
     {
      e=n*a;
             f=((n/2)*b)+a;
             cout<<min(e,f)<<endl;
     }



  }
  c=0,d=0,e=0,f=0;

       }
return 0;
}



