#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void add1_pointer(int *p)
{
    p=p+1;
}

void increment_value(int *p)
{
    (*p)++;
}

int main()
{
    int a=10;

    int *p=&a;

    print(p);

    cout<<p<<endl;
    add1_pointer(p);
    cout<<p<<endl;
    cout<<endl;

    cout<<*p<<endl;
    increment_value(p);
    cout<<endl<<*p<<endl;

}
