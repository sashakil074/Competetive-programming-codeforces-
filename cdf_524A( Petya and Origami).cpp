#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,k,a,b,c,sum;

   cin>>n>>k;

   a=n*2;
   b=n*5;
   c=n*8;

   sum=(ceil((double)a/k))+(ceil((double)b/k))+(ceil((double)c/k));

   cout<<sum<<endl;
    return 0;
}

