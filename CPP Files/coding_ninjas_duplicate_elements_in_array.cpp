#include<iostream>
using namespace std;

int main()
{
    int a[20],n;
    cout<<"Enter the size = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[j]<<" ";
            }
        }
    }
}
