#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,k=0,m=0,b;

    cin>>n;

   int  arr[n],arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    a=arr[n-1];
     for(int i=0;i<n;i++)
    {
      if(a%arr[i]!=0)
      {
          if(arr[i]>m)
          {
              m=arr[i];
          }
      }
    }
    b=m;
    cout<<a<<" "<<b<<endl;
    m=0;

return 0;
}



