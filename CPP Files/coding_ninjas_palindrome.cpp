#include<iostream>
using namespace std;

bool palindrome(char str[])
{
    int count=0,start,end;

    for(int i=0; str[i]!=NULL;i++)
    {
        count++;
    }

    start=0;
    end=count-1;

    while(start<=((count/2)+1))
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;

}

int main()
{

    char str[20];
    bool result;
    cout<<"Enter the string = ";
    cin>>str;
    cout<< palindrome(str) ? "true" : "false";


}
