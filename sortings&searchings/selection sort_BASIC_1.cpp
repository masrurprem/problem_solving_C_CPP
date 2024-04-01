#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[],int length)
{
    int min_index;
    for(int i=0;i<length-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<length;j++)
        {
            if(A[j]<A[min_index])
            {
                min_index=j;

            }
        }
        if(min_index!=i)
        {
            swap(A[i],A[min_index]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
