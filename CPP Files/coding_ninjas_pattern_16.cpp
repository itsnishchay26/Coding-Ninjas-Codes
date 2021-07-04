
//Isoscles triangle question

#include<iostream>
using namespace std;

int main()
{

    int n,i=1;
    cout<<"Enter the number of rows =";
    cin>>n;

    while(i<=n)
    {

        int j=1,sp=1;
        while(sp<=n-i)
        {
            cout<<" ";
            sp++;
        }

        while(j<=i)
        {
            cout<<j;
            j++;

        }

        j=i-1;//decreasing the values
        while(j>=1)
        {

            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}
