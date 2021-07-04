#include<iostream>
using namespace std;

void print_array(int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
}

void rev(int b[], int n)
{
    int temp=0,i=0,j=n-1;
    cout<<"Reversed array = "<<endl<<endl;

    for(;i<j;i++,j--)
    {temp=b[i];
    b[i]=b[j];
    b[j]=temp;}
}

int main()
{
    int n,b[50],x;
    cout<<"Enter the size of array = ";
    cin>>n;

    cout<<"Enter the array = ";


    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    x=b[0];

    for(int i=1;i<n;i++)
    {
        x=x^b[i];

    }
    cout<<endl<<endl<<endl;
    cout<<x;

    //print_array(b,n);
    //rev(b,n);
    //print_array(b,n);

    return 0;

}
