#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    vector<char>::iterator it;
    int t,n,k,j=0;
    char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int m=n/k;
        int b=m;
        while(m--){
        for(int i=j;i<k;i++)
        {
            v.push_back(arr[i]);
        }
        }
        int r=n-(k*b);

        for(int i=0;i<r;i++)
        {
            v.push_back(arr[i]);
        }
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
        v.clear();
    }
}
