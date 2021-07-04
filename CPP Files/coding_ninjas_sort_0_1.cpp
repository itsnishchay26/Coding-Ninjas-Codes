#include<iostream>
using namespace std;

int main()
{
    int a[20],n,val,count=0;
    cout<<"Enter the size = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }

    int nz=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            int temp=a[i];
            a[i]=a[nz];
            a[nz]=temp;
            nz++;
        }
    }

    for(int i=0;i<n;i++)
    {
         cout<<a[i]<<" ";
    }

}
