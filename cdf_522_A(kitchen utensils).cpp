#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t,md,td,sum,p;
    cin>>n>>k;
    int arr[n],arr2[n],c1=0,c2=n,maxp=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
    {
       p=arr[i];
        if(arr[i+1]==p)
        {
            c2--;
        }
    }

    for(int i=0; i<n; i++)
    {
        c1=0;
        int j=0;
        while(j!=n)
        {
            if(arr2[j]==arr2[i])
                c1++;
            j++;
        }
        if(c1>maxp)
            maxp=c1;

    }
    if(maxp>=k)
        md=ceil((double)maxp/k);
    else
        md=1;
    td=c2*md*k;
    sum=abs(td-n);
    cout<<sum<<endl;
    return 0;
}

