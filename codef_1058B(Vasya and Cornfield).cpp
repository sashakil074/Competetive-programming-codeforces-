#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,d,x,y;
    int r1=abs(n-d);
    cin>>n>>d;
    cin>>m;
    for(int i=1;i<=m;i++)
    {

        cin>>x>>y;
        if((x>0 && x<n) &&(y>0 && y<n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

