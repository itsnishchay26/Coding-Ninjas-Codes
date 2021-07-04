#include<iostream>
using namespace std;

int main()
{

        int n,i=1,val=1;
        cout<<"Enter the number of rows = ";
        cin>>n;

        while(i<=n)
        {
            int j=1;
            int k=1;
            while(k<=n-i)
            {

                cout<<" ";
                k++;
            }
            while(j<=i)
            {

                cout<<val;
                val++;
                j++;
            }
            cout<<endl;
            i++;
        }


}
