#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,m=0,o=0,c=0,c2=0;

    cin>>n;
    int arr[101],arr2[101],arr3[101];

    for(int i=1;i<=n;i++)
    {
         for(int j=0;j<101;j++)
    {
          cin>>arr[j];

        if(j==arr[0])
            break;

    }
      for(int j=0;j<101;j++)
    {
        arr3[j]=arr[j+1];
        m++;
    }
    }
    sort(arr3,arr3+m);

     for(int j=0;j<m;j++)
    {
        o=arr3[j];
      while(arr3[j]==o)
      {
        c2++;
        j++;
      }
    if(c2==n)
        {
            cout<<o<<" ";
        }
    }

    return 0;
}


