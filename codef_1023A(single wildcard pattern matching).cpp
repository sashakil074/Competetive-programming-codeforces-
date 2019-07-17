#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int n,m;
    int i=0,j=0,k=0,c,l=0,o=0,q=o,r=0;
    cin>>n>>m;
    char s[n],t[m],s1[n],s2[n],t1[m],t2[m];
    scanf("%s",s);
    scanf("%s",t);

   for(i=0;i<strlen(s);i++)
   {


   if(s[i]=='*')
   {
       for(int p=i;p<strlen(s);p++)
       {
           s2[k++]=s[p+1];
       }
   break;
   }
   else
    s1[j++]=s[i];
   }
   s1[j]='\0';
   s2[k]='\0';
   for(l=0;l<j;l++)
   {

     t1[q++]=t[l];

   }
   t1[q]='\0';
  for(o=strlen(t)-strlen(s2);o<strlen(t);o++)
   {
       t2[r++]=t[o];
   }
    t2[r]='\0';
   if(strcmp(s1,t1)==0 && strcmp(s2,t2)==0 && (q+r)<=strlen(t))
   cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

    return 0;
}
