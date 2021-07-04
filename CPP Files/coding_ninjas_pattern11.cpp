
#include<iostream>
using namespace std;

int main()
{

    int n,i=1;
    cout<<"Enter the number of rows = ";
    cin>>n;

    while(i<=n)
    {

        int j=1;
        char ch;
        while(j<=n)
        {

             ch='A' + j -1;//type casting done
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    }

