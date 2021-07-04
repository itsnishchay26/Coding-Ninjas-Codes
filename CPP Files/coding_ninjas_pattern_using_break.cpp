#include<iostream>
using namespace std;

int main()
{
    int n,i=1;

    cout<<"enter the number of rows = ";
    cin>>n;

    while(i<=n)
    {

        int j=1;
        while(j<=i)
        {

            cout<<j;
            j++;

            if(j>i)     // this is the variant using break keyword
                break;
        }
        cout<<endl;
        i++;

    }


}
