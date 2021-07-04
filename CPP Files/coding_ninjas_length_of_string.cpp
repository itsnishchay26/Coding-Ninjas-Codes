#include<iostream>
using namespace std;

int length(char a[])
{
    int count=0;
    for(int i=0;a[i]!=NULL;i++)
    {
        count++;
    }
    return count;

}

int main()
{

    char a[40];
    cout<<"Enter the name: ";
    cin>>a;

    cout<<"Length of string = "<<length(a);
}
