#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int a[20],n,start,endi,val=1;
    cout<<"Enter array size = ";
    cin>>n;

    start=0;
    endi=n-1;

   for(int i=0;i<(n/2);i++)
    {
        a[start]=val;
        start++;
        val++;
        a[endi]=val;
        endi--;
        val++;

    }
    if(n%2!=0)
    {
        a[n/2]=val;
    }
    cout<<"Array is ready = ";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
