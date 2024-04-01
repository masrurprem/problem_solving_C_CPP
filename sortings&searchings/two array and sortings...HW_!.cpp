#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[100000],b[100000];
        pair<int,int>p[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p[i].first=a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
            p[i].second=b[i];
        }
        sort(p,p+n);
        int s[100000],d[100000];
        for(int i=0;i<n;i++)
        {
            s[i]=p[i].first;
            d[i]=p[i].second;

        }
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<" ";
            cout<<endl;
            cout<<d[i]<<" ";
        }

    }
}

