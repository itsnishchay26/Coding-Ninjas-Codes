#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int smallop=fact(n-1);
    return n*smallop;
}


int main()
{
    int n;
    cin>>n;
    int op=fact(n);
    cout<<op;

}
