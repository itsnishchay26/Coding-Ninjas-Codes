#include<iostream>
using namespace std;

int index(int a[], int n, int x)
{
    if(n==0) // base case
    {

        cout<<"-1";
    }

    if(a[0]==x)
    {
        cout<<"0";
    }

    int ans;

    ans=index(a+1,n-1,x);

    if(ans==-1)
    {
        cout<<"-1";
    }

    if(ans!=-1)
    {
        cout<<ans+1;
    }


}

int main()
{
    int a[5]={5,5,6,5,6};
    int n=5;
    int x;

    cin>>x;

    index(a,n,x);
}

