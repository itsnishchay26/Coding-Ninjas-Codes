#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[20],str2[20];

    cin>>str1;
    cin>>str2;
    //int l=strlen(str1);
    //cout<<l;



    /*if(strcmp(str1,str2)==0)
    {
        cout<<"true";
    }
    else
        cout<<"false";

        */
    strncpy(str1,str2,4);

    cout<<str1;
}
