#include<iostream>
using namespace std;

int digits(int n)
{
    if(n>=0 && n<=9)// base case
    {
        return 1;
    }

    int counti=digits(n/10); // recursive call

    return counti+1 ;


}

int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    cout<<digits(n)<<endl;
}
