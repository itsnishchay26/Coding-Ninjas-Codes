#include<iostream>
#include<cstring>
using namespace std;

void reverse_wordwise(char a[])
{
    int n,start,end,temp;

    n=strlen(a);

    start=0;
    end=n-1;

    while(start<=end)  // reversed the all the words of the string
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }

    int i,j;

    i=0;
    j=0;

    while(i<=n)// checking till the last index coz it might not have a space
    {
        if(a[i]==' ' || i==n)// checking for spaces as  2 words can be separated by spaces
        {
            end=i-1;//first word ka end index
            while(j<end)
        {

            temp=a[end];
            a[end]=a[j];
            a[j]=temp;
            j++;
            end--;
        }
        j=i+1;//next word ka starting index h ye
        i++;
    }
        i++;

    }



}

int main()
{
    char a[10000];
    cout<<"enter the string = ";
    cin.getline(a,10000);
    reverse_wordwise(a);
    cout<<a<<endl;
}
