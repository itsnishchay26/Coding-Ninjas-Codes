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

    cout<<"Enter the value = ";
    cin>>val;

    for(int i=0;i<n;i++)
    {
        int j=i+1;
        for(;j<n;j++)
        {
            if(a[i]+a[j]==val)
            {
                count++;
            }
        }
    }

    cout<<"Number of pairs= "<<count;
