#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,k,sum=0;



    cin>>n>>k;
   long long int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    for(int i=1;i<=k;i++)
    {
    sort(arr,arr+n);
    if(i>n)
      cout<<"0"<<endl;
    else
    cout<<arr[0]<<endl;
    a=arr[0];
    sum=0;
    for(int j=0;j<n;j++)
    {
        arr[sum++]=arr[j+1]-a;
        if(arr[j+1]==a)
            arr[sum--];
    }
    }

return 0;
}



