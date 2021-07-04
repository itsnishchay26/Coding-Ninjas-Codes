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

void reverse_string(char a[])
{
    int len,i,j;
    len=length(a);
    i=0,j=len-1;

    while(i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }

}

int main()
{

    char a[3000];
    cout<<"Enter the string : ";
    cin.getline(a,100);
    reverse_string(a);
    cout<<a<<endl;
}
