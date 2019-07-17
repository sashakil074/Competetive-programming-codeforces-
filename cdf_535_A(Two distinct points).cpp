#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b,c,d;
    int t,i;


    cin>>q;

    for(int i=1;i<=q;i++)
    {
        cin>>a>>b>>c>>d;


       if(a==c)
       {
         cout<<a<<" "<<c+1<<endl;
       }
       else
       {
        cout<<a+1<<" "<<c+1<<endl;
       }
       }
return 0;
}



