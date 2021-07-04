#include<iostream>
using namespace std;

int main()
{
    int _and,_or,_not,_xor,_ls,_rs;

    _and= 21&5;
    _or= 9|5;
    _xor=4^6;
    _not=~15;
    _ls=5<<4;
    _rs=6>>2;


    int a=7;


    cout<<_and<<endl<<_or<<endl<<_not<<endl<<_xor<<endl<<_ls<<endl<<_rs<<endl;


    cout<<++a<<endl<<a++;
}
