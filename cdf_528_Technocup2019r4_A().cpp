#include<bits/stdc++.h>
using namespace std;
int main()
{
    char t[50],s[50];
    int l=0,m=0,n;
    cin>>t;

   l=strlen(t);
   if(l==1)
   {
      cout<<t<<endl;
   }
   else{
        n=ceil((double)l/2);
   int j=n-1;
   s[0]=t[j];
   for(int i=1;i<l;i++)
   {
      m=m+1;

      if((m%2)!=0){
            j=j+i;
       s[i]=t[j];
      }
      else{
          j=j-i;
       s[i]=t[j];
       }

   }
   s[l]='\0';
cout<<s<<endl;}
    return 0;
}
