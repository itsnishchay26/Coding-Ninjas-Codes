#include<iostream>
using namespace std;

int main()
{
    /*char c;
    cin>>c;

    int count=0;
    while(c!='$')
    {

        count++;
        cin>>c;
    }
    cout<<endl<<count; */

    char ch;

    ch=cin.get();

    int count=0;

    while(ch!='$')
    {

        count++;
        ch=cin.get();
    }
    cout<<count;

}

