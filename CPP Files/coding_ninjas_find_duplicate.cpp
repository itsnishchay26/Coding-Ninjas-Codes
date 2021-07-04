#include<iostream>
using namespace std;

int main()
{
    bool duplicate=false;
    int n,a[20],val;

    cout<<"Enter the array size= ";
    cin>>n;

    cout<<"Enter the array = ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // processing

    for(int i=0;i<n;i++)
    {
        int j=i+1;
        for(;j<n;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=true;
                val=a[i];
                break;
            }
        }
    }

    if(duplicate=true)
        cout<<"Duplicate value is = "<<val;
    else
        return 0;

}
