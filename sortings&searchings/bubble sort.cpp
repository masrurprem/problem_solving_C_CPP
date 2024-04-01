#include<iostream>
using namespace std;
int main()

{
    int l,c=0;
    cin>>l;
    int a[10000];
    for (int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<l;i++)
    {
        for (int j=0;j<l-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                c++;

            }

        }
    }
//    for(int i=0;i<l;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
    cout<<c<<endl;


}
