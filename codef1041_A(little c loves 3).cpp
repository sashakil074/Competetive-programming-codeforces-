#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int n,r,a,b,c;
cin>>n;
if(n%3==0)
{
a=1;
b=1;
c=n-2;
cout<<a<<" "<<b<<" "<<c<<endl;
}
else if(n%3!=0)
{
a=1;
b=2;
c=n-3;
cout<<a<<" "<<b<<" "<<c<<endl;
}

return 0;
}
