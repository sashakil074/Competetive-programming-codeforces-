#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,v=0,b=0,m=0;

    cin>>n;

    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
     if(arr[0]==1 && (arr[n-1]-arr[0]==n-1))
        {
            c=arr[n-1]-1;
        }
    else if(arr[n-1]==1000 && (arr[n-1]-arr[0]==n-1))
        {
          c=arr[n-1]-arr[0];
        }
     else
        {
             for(int i=0;i<n;i++)
          {
           if(arr[i+1]-arr[i]==1){
            v++;
            b=1;
           }
           if(arr[i+1]-arr[i]!=1){
            if(v>m)
            {
                m=v;
                v=0;
                b=1;
            }
           }
          }
          if(b==1)
            c=m-1;
          else
            c=0;
        }

       cout<<c<<endl;


    return 0;
}

