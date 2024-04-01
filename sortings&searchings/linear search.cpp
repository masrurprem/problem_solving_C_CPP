#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int l,int key)
{
    for(int i=0;i<l;i++)
    {
        if(arr[i]==key)
        {
            return i;
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
    int x;
    cin>>x;
    int result=linear_search(a,n,x);
    cout<<"element_position:"<<result<<endl;
    cout<<"element_value:"<<a[result]<<endl;

}
