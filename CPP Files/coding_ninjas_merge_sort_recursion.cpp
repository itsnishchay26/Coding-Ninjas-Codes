#include<iostream>
using namespace std;
void merger(int a[], int si, int ei)
{
    int ans[ei-si+1];
    int mid=(ei+si)/2;
    int i=si;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=ei)
    {
        if(a[i]<=a[j])
        {
            ans[k]=a[i];
            i++;
        }
        if(a[j]<=a[i])
        {
            ans[k]=a[j];
            j++;
        }
        k++;

        if(i<=mid)
        {
            for(;i<=mid;i++)
            {
                ans[k]=a[i];
                k++;
            }
        }
        if(j<=ei)
        {
            for(;j<=ei;j++)
            {
                ans[k]=a[j];
                k++;
            }
        }

    }

    for(k=0, i=si; i<=ei ; i++,k++)// a -> p , ans -> q
    {
        a[i]=ans[k];
    }
}

void merge_calc(int a[], int si, int ei)
{
    if(si>=ei)
    {
        return;
    }

    int mid;

    mid=(ei+si)/2;

    merge_calc(a,si,mid);
    merge_calc(a,mid+1,ei);
    merger(a,si,ei);

}


void mergeSort(int a[], int n)
{
    merge_calc(a,0,n-1);
}

int main()
{

    int a[40],n;

    cout<<"Enter the size of array = ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    mergeSort(a,n);

    for(int i = 0; i<n; i++)
    {
    cout << a[i] << " ";
    }

}

