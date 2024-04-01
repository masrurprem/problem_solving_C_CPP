#include<bits/stdc++.h>
using namespace std;
int bin_search(int arr[],int l,int h,int key)
{
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,m,r;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cin>>r;
    while(r--)
    {
        int sum=0,flag;
        cin>>m;
        int res=bin_search(a,0,n-1,m);






    }
}
