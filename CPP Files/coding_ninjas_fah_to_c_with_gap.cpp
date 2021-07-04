#include<iostream>
using namespace std;

void fah_to_c(int s, int e, int g)
{
        int first_val=s;
        int c;
        while(first_val<=e)
        {
            c=(int)(5.0*(first_val-32.0))/9.0;
            cout<<first_val<<"  "<<c<<endl;
            first_val+=g;
        }
}

int main()
{
    int start,endi,gap;
    cout<<"Enter the start fahrenheit temperature : ";
    cin>>start;
    cout<<"Enter the end fahrenheit temperature : ";
    cin>>endi;
    cout<<"Enter the gap: ";
    cin>>gap;

    fah_to_c(start,endi,gap);
}
