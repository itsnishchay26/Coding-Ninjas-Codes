#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int a[20],n,num,add;
    bool found=false;
    cout<<"Enter array size = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the value to be searched = ";
    cin>>num;

    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            found=true;
            add=i+1;
            break;
        }
    }

    cout<<"number found at "<<add;


}
