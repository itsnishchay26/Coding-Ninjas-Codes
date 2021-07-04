//#include<math.h>
#include<iostream>
using namespace std;

int main()
{

     int a[20],n;
     cout<<"Enter the size = ";
     cin>>n;

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

     int x=a[0];

     for(int i=1;i<n;i++)
     {
         x=x^a[i];
     }

     cout<<"Unique is ="<<x;
}
