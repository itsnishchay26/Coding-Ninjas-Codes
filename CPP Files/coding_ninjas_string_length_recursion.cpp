#include<iostream>
using namespace std;

int length(char str[])
{
    if(str[0]=='\0')  // base case
    {

        return 0;
    }

    int small=length(str+1);

    return 1+small;
}

int main()
{

    char str[100];
    cin>>str;
    int l=length(str);
    cout<<l<<endl;

}
