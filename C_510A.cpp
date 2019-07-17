#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,maxe=0,sum=0;
    cin>>n;
    cin>>m;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
     sum=sum+arr[j];
     if(arr[j]>maxe)
        maxe=arr[j];
     else
        maxe=maxe;

    }
    double r1=(double)(sum+m)/(double)n;
    int r2=m+maxe;
    cout<<ceil(r1)<<" "<<r2<<endl;

    return 0;
}
