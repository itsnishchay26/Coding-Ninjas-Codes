#include<iostream>
using namespace std;

int power(int n, int x)
{
    if(x==0) // base case
    {
        return 1;
    }

    power(n,x-1); // recursive call




}

int main()
{
    int n,x;
    cout<<"Enter the number = ";
    cin>>n;

    cout<<"Enter the power to be raised = ";
    cin>>x;

    cout<<power(n,x)<<endl;
}
