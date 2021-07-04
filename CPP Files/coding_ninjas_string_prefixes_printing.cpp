#include<iostream>
#include<cstring>
using namespace std;

void print_prefix(char a[])
{
        for(int i=0;a[i]!=NULL;i++)// i represents end index
        {
            for(int j=0;j<=i;j++)
            {
                cout<<a[j];
            }
            cout<<endl;
        }
}

int main()
{
    char a[1000];
    cin>>a;
    print_prefix(a);

}
