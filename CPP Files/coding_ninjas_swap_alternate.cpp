#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int a[20],n,start,endi,val=1,i=0,j=i+1;
    cout<<"Enter array size = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i+=2,j+=2)
    {

            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
