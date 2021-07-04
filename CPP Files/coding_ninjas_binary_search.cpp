#include<iostream>
using namespace std;

int binary_search(int a[], int n, int val)
{
    int start=0,endi=n-1,add;
    bool found=false;

    while(start<=endi)
    {

        int mid=(start+endi)/2;

        //for(int i=1;i<n;i++)
        {
            if(a[mid]==val)
            {
                found=true;
                add=mid+1;
                break;

            }
            if(a[mid]>val)
            {
                endi=mid-1;
            }
            if(a[mid]<val)
            {
                start=mid+1;
            }

        }

        if(found==true)
            return (add+1);


    }
}






int main()
{
        int a[10],n,val,res;
        cout<<"Enter the number of elements = ";
        cin>>n;
        cout<<"Enter the sorted array only = ";
        cout<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<endl;

        cout<<"Enter the value to be searched = ";
        cin>>val;



        cout<<"Element "<<val<<"found at "<< binary_search(a,n,val)<<"th position";






}
