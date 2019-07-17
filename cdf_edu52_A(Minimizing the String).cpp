#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,l,p;

    cin>>n;
    char arr1[n+1],arr2[n+1];
    cin>>arr1;
    l=strlen(arr1);
    strcpy(arr2,arr1);
    if(strcmp(arr1,arr2)==0)
    {
      arr2[l-1]='\0';
      cout<<arr2<<endl;
    }
    else
    {
     p=l;

    }


    return 0;
}
