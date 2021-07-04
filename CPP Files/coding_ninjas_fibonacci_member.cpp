#include<iostream>
using namespace std;

bool member(int n)
{
    int t1,t2,next;

    t1=0;
    t2=1;

    while(next<n)
    {

        next=t1+t2;
        t1=t2;
        t2=next;
        if(next==n)
        {
            //cout<<"true ";
            //break;
            return true;
        }


    }
    return false;

}

int main()
{
    int n;
    cout<<"Enter the num ";
    cin>>n;
    /*cout<<"Enter the end fahrenheit temperature : ";
    cin>>endi;
    cout<<"Enter the gap: ";
    cin>>gap;
*/
    member(n);
}
