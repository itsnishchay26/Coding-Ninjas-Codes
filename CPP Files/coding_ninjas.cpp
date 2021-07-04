#include<iostream>
using namespace std;

int main()
{

    int n,i=1;  // i is used in while loop for the number of rows
    cout<<"Enter the number of rows : ";

    cin>>n;

    while(i<=n)
    {

        int j=1;    // j is doing the calculation part in the row itself
        while(j<=i)
        {

            cout<<j;
            j++;

        }
        cout<<endl;
        i++;
    }

}
