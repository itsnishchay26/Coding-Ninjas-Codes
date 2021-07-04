#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)// base case
    {
        return ;
    }
    print(n-1); // recursive call

    cout<<n<<" "; // small calculation



}


int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    print(n);

}
