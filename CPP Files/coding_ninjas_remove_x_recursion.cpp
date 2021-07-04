#include<iostream>
using namespace std;

void removeX(char str[])
{
    if(str[0]=='\0')
    {
        return ;
    }

    if(str[0]!='x')
    {
        removeX(str+1);
    }

    else // this is str[0]==x thats why i is starting from 1
    {
        int i=1;
    for( ;str[i]!='\0'; i++ )
    {
        str[i-1]=str[i];
    }

    str[i-1]=str[i]; // null character ko bhi last me copy krne ke liye this step is inducted

    removeX(str);
    }


}

int main()
{
    char str[100];
    cin>>str;

    removeX(str);

    cout<<str;
}

