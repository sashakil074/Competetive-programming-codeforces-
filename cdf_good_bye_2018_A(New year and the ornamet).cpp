#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r,sum=0;
    cin>>y>>b>>r;

    if((y>=b && b<r))
    {
        sum=(b-1)+b+b+1;
    }
    else if((r<=y && r<=b) || (y==b && b==r))
    {
        sum=(r-2)+(r-1)+r;
    }
    else if(y<=b && y<=r && (r-y)<2)
    {
        int n=y-(r-y);
        sum=n+n+1+n+2;
    }
    else
    {
        sum=y+y+1+y+2;
    }

    cout<<sum<<endl;
    return 0;
}

