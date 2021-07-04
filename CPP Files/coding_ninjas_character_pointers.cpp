#include<iostream>
using namespace std;

int main()
{
    int a[4]= {1,2,3};
    char b[]="abcd";

    //int *i=&a;
    char *c=&b[0];

    cout<<a<<endl;
    cout<<c<<endl;

    char c1='a';
    char *pc = &c1;

    cout<<c1<<endl;
    cout<<pc<<endl;
}
