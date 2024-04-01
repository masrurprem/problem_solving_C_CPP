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

        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];

        }
        for(int i=0;i<n;i++)
        {
            p[i].first=a[i];
            p[i].second=b[i];
        }
        for(int i=0:i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(b[j],b[j+1]);
                }
                else if(a[j]==a[j+1])
                {
                    if(b[j]>b[j+1])
                    {
                        swap(a[j],a[j+1]);
                        swap(b[j],b[j+1]);
                    }
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            a[i]=p[i].first;
            b[i]=p[i].second;

        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";

        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }


    }
}

