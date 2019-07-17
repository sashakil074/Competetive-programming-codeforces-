#include<bits/stdc++.h>
int main()
{
    int n,h,a,b,k;
    int ta,fa,tb,fb,c=0;
    scanf("%d%d%d%d%d",&n,&h,&a,&b,&k);
    for(int i=1;i<=k;i++)
    {
        scanf("%d%d%d%d",&ta,&fa,&tb,&fb);
        c=0;
            if(ta!=tb)
            {
              c=c+abs(ta-tb);
              if(fa<a)
              {
                  c=c+abs(a-fa);
                  fa=a;
              }
              else if(fa>b)
              {
                  c=c+abs(b-fa);
                  fa=b;
              }
            }
              c=c+abs(fa-fb);

           printf("%d\n",c);
          }

    return 0;
}
