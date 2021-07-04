#include<iostream>
using namespace std;

int is_sorted(int a[], int size)
{
    if( size == 0 || size == 1)
    {
        return 1;
    }
    if( a[0] > a[1])
    {
        return -2;
    }
     bool sorted = is_sorted( a+1, size - 1);

     if(sorted)
     {
         return true;
     }
     else

         return false;
}

int main()
{
    int a[5]={2,3,4,5,1};
    int size=(sizeof(int))/(sizeof(a[0]));
    cout<<is_sorted(a,size);

}
