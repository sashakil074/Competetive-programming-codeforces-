#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,k,sum1=0,sum2=0,j;
    int t,i;


    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
    cin>>arr[i];
    }
     for(int i=0;i<t;i++)
    {
        a=arr[i];
        arr[i]=0;
       sum2=arr[0];
     for(int j=1;j<t;j++)
    {

        if(j%2!=0)
        {
            sum1=sum1+arr[j];
        }
        else{

            sum2=sum2+arr[j];
        }
    }
    if(sum1==sum2)
    {
        b++;
    }
    sum1=0;
    sum2=0;
    arr[i]=a;
    }

    cout<<b<<endl;
return 0;
}



