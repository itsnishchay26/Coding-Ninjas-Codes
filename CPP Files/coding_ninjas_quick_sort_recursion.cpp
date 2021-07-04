#include<iostream>
using namespace std;
int partition ( int input[], int si, int ei )
{
    int pivot=input[si];
    int i=si;
    int j=ei;
    int count=0;

    for(int i=si; i<ei; i++)
    {
        if(input[i]<pivot)
        {
            count++;
        }
    }

    int pivot_index= si+count;

    int temp=input[pivot_index];
    input[pivot_index]=input[si];
    input[si]=temp;   // swapping done for the pivot index and the starting index

    while(i<j)
    {
        if(input[i]<pivot)
        {
            i++;
        }
        if(input[j]>=pivot)
        {
            j--;
        }

        else
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;j--;
        }
    }
    return si+count;


}

void qs( int input[], int si, int ei)
{
    if(si>=ei)//base case
    {
        return;
    }

    int c=partition(input,si,ei);
    qs(input,si,c-1); // recursive call for array 1
    qs(input,c+1,ei); // recursive call for array 2

}

void quickSort(int input, int n)
{
    qs(input,0,n-1);
}

int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}



