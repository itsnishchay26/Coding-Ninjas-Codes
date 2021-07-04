#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int sum=0,a[20],n;

    cout<<"Enter the size = ";
    cin>>n;

    if(n>=1 && n<=pow(10,6))
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

    }
    cout<<"Array sum = "<<sum;


}
