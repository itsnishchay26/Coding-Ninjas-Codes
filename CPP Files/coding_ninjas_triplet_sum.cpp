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
            int k=j+1;
            for(;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==val)
                {
                    count++;

                }
            }
        }
    }
    cout<<"Number of triplets = "<<count;
}
