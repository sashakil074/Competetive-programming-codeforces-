#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n;

   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {

  cin>>arr[i];
   }
   sort(arr,arr+n);
   if(n==2)
   {
       cout<<"0"<<endl;
   }
   else{
   if(abs(arr[0]-arr[n-2])<= abs(arr[n-1]-arr[1]))
   {
       cout<<abs(arr[0]-arr[n-2])<<endl;
   }
   else if(abs(arr[0]-arr[n-2])> abs(arr[n-1]-arr[1]))
   {
      cout<<abs(arr[n-1]-arr[1])<<endl;
   }
   }
    return 0;
}




