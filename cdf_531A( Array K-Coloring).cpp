#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m=1,k,t,p=0;
    cin>>n>>k;
    int arr[n],a1[n],a2[k],a3[n];
    t=n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a1[i]==arr[i];
    }
    sort(arr,arr+n);
    for(int j=0;j<n;j++)
    {
     if(arr[j]==arr[j+1])
        t--;
    }
    for(int j=0;j<k;j++)
    {
     a2[j]=j+1;
    }
     if(t<=k)
    cout<<"NO"<<endl;
     else
     {
       for(int i=0;i<n;i++)
       {

         for(int j=0;j<n;j++)
         {
             a3[p++]=1;
          if(a1[i]==a1[j])
          {
              a3[j]=m++;
          }
          m=1;
         }



       }
       cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
    {
      cout<<a3[i]<<" ";
    }
     }
    return 0;
}
