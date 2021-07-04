#include<iostream>
using namespace std;

int main()
{

    int n,i=1;
    cout<<"Enter the rows= ";
    cin>>n;

    while(i<=n)
    {

        int j=1;
        char start_ch= 'A' + i -1;
        char next_ch;
        while(j<=n)
        {
            next_ch= start_ch + j - 1;
            cout<<" "<<next_ch;
            j++;

        }
        cout<<endl;
        i++;
    }
}
