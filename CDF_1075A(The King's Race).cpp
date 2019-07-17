#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,x,y;

   cin>>n;
   cin>>x>>y;
   if((abs(1-x)+abs(1-y)) <= (abs(n-x)+abs(n-y)))
      {
          cout<<"White"<<endl;
      }
    else if((abs(1-x)+abs(1-y)) > (abs(n-x)+abs(n-y)))
        {
         cout<<"Black"<<endl;
        }

    return 0;
}
