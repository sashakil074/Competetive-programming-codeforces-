#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,k=0,t;
   cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>n;
    char s1[n];
    cin>>s1;
    for(int j=0;j<=n;j++)
    {
        if(s1[j]=='8')
        {
            if(abs(j-n)>=11){
                k=1;
                break;
            }
            else{
                k=0;
                break;

            }
        }
        else
            k=0;
    }
    if(k==1)
        cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
}

    return 0;
}


