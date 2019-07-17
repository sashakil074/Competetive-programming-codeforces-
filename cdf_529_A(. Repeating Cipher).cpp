#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,k=1,m=0;

   cin>>n;
   char t[n],s[n];

   cin>>t;
   s[0]=t[0];
   for(int i=1;i<n;i++)
   {
       if(m+i>n)
        break;
       else{
     m=m+i;
     s[k++]=t[m];
       }

   }
  s[k]='\0';
   cout<<s<<endl;
    return 0;
}



