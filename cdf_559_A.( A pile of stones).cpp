#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;


    cin>>n;
    char s1[n];
    cin>>s1;

    int arr[3],a=0,b=n,c=n/2;

    for(int i=0;i<n;i++)
    {
        if(s1[i]=='+')
        {
            a=a+1;
            b=b+1;
            c=c+1;
        }
        else
        {
          a=a-1;
          b=b-1;
          c=c-1;
        }
    if(a<0)
        a=0;
    if(b<0)
        b=0;
     if(c<0)
     c=0;

    }
   arr[0]=a;
   arr[1]=b;
   arr[2]= c;
   sort(arr,arr+3);

   cout<<arr[0]<<endl;


return 0;
}




