#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,m=0,o=0,c=0;

    cin>>n;
    int arr[101],arr2[101]={0},arr3[101];
    for(int i=1;i<=n;i++)
    {
         for(int j=0;j<101;j++)
    {
          cin>>arr[j];
        if(j==arr[0])
            break;

    }
     for(int k=0;k<arr[0];k++)
    {
         for(int l=0;l<arr[0];l++)
    {

        if(arr[k+1]==arr2[l])
        {
            arr3[k]=arr2[l];
            c=k;
            cout<<arr3[k]<<" ";
        }


    }

    }

 for(int m=0;m<arr[0];m++)
    {
     arr2[m]=arr[m+1];
    }
    }
  /*    for(int j=0;j<c/2;j++)
    {
    cout<<arr3[j]<<" ";
    }*/
    return 0;
}


