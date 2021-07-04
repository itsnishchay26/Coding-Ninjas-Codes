#include<iostream>
using namespace std;

int sum(int a[],int len)
{
    int ans=0;

    if(len==0) // base case
    {
        return 0;
    }

    int next = sum(a+1,len-1);

    int first=a[0];





    return ans + next + first;

}

int main()
{
    int a[6]={1,2,3,4,5};
    int len = sizeof(int)/sizeof(a[0]);
    sum(a,len);
    cout<<sum;
}

