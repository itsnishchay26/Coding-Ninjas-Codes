#include<iostream>
using namespace std;

int main()
{

    int n,t1,t2,c,next;
    t1=0;
    t2=1;
    c=2;

    cout<<"Upto how many numbers you want to print the fibonacci series= ";
    cin>>n;
    cout<<"FIBONACCI SERIES IS AS FOLLOWS = "<<t1<<" "<<t2<<" ";

    while(c<=n-1)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
        c++;

        //if(c==n)
        //{
          //  break;
        //}
        cout<<next<<" ";
    }
    cout<<endl;
    cout<<"nth number of fibonacci series is = "<<next;

}
