#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,i,j;
int maxn=0;
cin>>n;
for(int k=1;k<=n;k++)
{

    cin>>i>>j;
   int r=i+j;
    if(r>maxn)
    {
        maxn=r;
    }
}
cout<<maxn<<endl;

return 0;
}

