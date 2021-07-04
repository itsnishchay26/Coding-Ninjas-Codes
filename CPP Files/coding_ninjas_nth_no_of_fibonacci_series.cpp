#include<iostream>
using namespace std;

int main()
{

    int n,t1,t2,c,next;
    t1=0;
    t2=1;
    c=1;

    cout<<"Enter the nth number of fibonacci series you want to print = ";
    cin>>n;

    while(c<=n)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
        c++;

        if(c==n)
        {
            break;
        }
    }
    cout<<"nth number of fibonacci series is = "<<next;

}
