#include<iostream>
using namespace std;

int &f(int n)
{
    int a=n;
    return a;
}

int *f2()
{
    int i=10;
    return &i;
}

int main()
{
    int *ptr=f2();
    int i=10;


    cout<<f(i);




}
