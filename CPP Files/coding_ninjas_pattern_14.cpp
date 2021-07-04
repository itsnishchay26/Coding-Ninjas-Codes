#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"Enter the number of rows = ";
    cin>>n;

    while(i<=n)
    {

        //int j=1;
        int sp=1,st=1;
        while(sp<=n-i)
        {

            cout<<" ";
            sp++;
        }
        while(st<=i)
        {

            cout<<"*";
            st++;
        }
        cout<<endl;
        i++;
    }
}
