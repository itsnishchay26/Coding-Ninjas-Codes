#include<iostream>
using namespace std;

int main()
{
    int n,i=1,p=1;
    cout<<"Enter the number of rows = ";
    cin>>n;

    while(i<=n)
    {

        int j=1;
        //;
        while(j<=i)
        {

            cout<<" "<<p;
            p++;
            j++;


        }
        cout<<endl;

        i++;
    }

}
