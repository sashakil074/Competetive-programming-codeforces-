#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(m==1)
        {
         c=1;
        }

    }
    if(c==1)
    {
     cout<<"HARD"<<endl;
    }
    else if(c==0)
    {
     cout<<"EASY"<<endl;
    }

    return 0;
}
