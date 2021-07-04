//#include<math.h>
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
        int j=0;
        for(;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }

        }
        if(i==j)
             cout<<a[i]<<" ";


    }
}
