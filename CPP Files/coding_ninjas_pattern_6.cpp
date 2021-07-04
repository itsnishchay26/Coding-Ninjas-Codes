#include<iostream>
using namespace std;

int main()
{
    int n,i=1,var;
    cout<<"Enter the number of rows =";
    cin>>n;
    while(i<=n)
    {

        int j=1;
        var=j;
        while(j<=n)
        {

            cout<<j;
            var++;
        }
        cout<<endl;
        i++;
    }

}
