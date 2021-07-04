#include<iostream>
using namespace std;

int main()
{
    int *p=new int;
    *p=30;
    cout<<*p<<endl;


    int *p1=new int;
        delete p1;



    {
        int i=10;
    }


    delete p;
}
