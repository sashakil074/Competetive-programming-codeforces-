#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,h1,m1,h2,m2,h3=0,m3=0,m4;

    scanf("%02d:%02d", &h1, &m1);
    scanf("%02d:%02d", &h2, &m2);
    h3=(h1+h2)/2;
    sum=(abs(h1-h2))*60;
    m3=(sum+(m1+m2))/2;

   if((m1+m2)>59){
   h3=h3+(m3/60);
   }
    m4=m3%60;
    h3=h3+(m4/60);

    printf("%02d:%02d",h3,m4);
    return 0;
}

