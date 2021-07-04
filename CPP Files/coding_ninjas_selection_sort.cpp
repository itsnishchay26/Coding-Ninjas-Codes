#include<iostream>
#include<climits>
using namespace std;

void selection_sort(int a[], int n)
{
    for(int j=0;j<n-1;j++) //   j <n-1 coz sorting me rounds 0 to n-1 honge n loop 1 less than the number of elements tk  chaelga to thats why : j<n-1
    {
        int min_ele=a[j],add=j;

        for(int i=j+1;i<n;i++)
        {
            if(a[i]<min_ele)
            {
                min_ele=a[i];
                add=i;
            }

        }

        int temp=a[j];
        a[j]=a[add];
        a[add]=temp;


    }

}




int main()
{
        int a[10],n,val,res;
        cout<<"Enter the number of elements = ";
        cin>>n;
        cout<<"Enter the array = ";
        cout<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        selection_sort(a,n);

        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
}
