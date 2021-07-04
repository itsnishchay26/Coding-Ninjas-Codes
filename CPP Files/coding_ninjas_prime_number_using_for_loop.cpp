#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number = ";
    cin>>n;
    bool divided=false;

    for(int d=2;d<n;d++)
    {

        if (n%d==0)
        {
            divided=true;

        }
    }

    if(divided==true)
    {

        cout<<"The number entered is not prime";

    }
    else
        cout<<"Prime";
}
