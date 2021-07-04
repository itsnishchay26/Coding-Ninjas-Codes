#include<iostream>
using namespace std;

int main()
{

    int n,i=1;
    cout<<"Enter the rows = ";
    cin>>n;

     while(i<=n)
     {

         int j=1;
         //var=val;
         /*while(k<=n-i)
         {

             cout<<" ";
             k++;//Ṇ
         }*/
         while(j<=n)
         {

             cout<<" "<<n-j+1;
             //var++;
             j++;
         }
         cout<<endl;
         i++;
         //val++;
     }
}

