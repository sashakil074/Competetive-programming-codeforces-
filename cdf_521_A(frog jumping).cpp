#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,k,sum=0,j;
    int t,i;


    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>k;


       if(k%2==0)
       {
           sum=((a-b)*k)/2;
       }
       else
       {
           sum=(((a-b)*(k-1))/2)+a;
       }


      cout<<sum<<endl;
       sum=0;
       }
return 0;
}


