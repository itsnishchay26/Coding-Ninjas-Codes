#include<iostream>
using namespace std;

int main()
{
    int a[20],b[20],n,m;
    cout<<"Enter the size 1 = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }

    cout<<"Enter the size 2 = ";
    cin>>m;

    for(int i=0;i<n;i++)
    {
         cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                b[j]=-1;
                break;
            }
        }
    }
}
