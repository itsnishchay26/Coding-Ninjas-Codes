#include<iostream>
using namespace std;
#define pi 3.1415
int a; // global variable

int area(int r)
{
    return pi*r*r;
}

void f()
{
    a++;
    cout<<a+2;
}

void g()
{
    a+=3;
    cout<<a<<endl;
    f();
}

int main()
{
    /*int r,ar;
    cin>>r;
    ar=area(r);
    cout<<ar;*/

    a=8;
    g();
    f();
}
