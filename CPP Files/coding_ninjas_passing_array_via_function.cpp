#include<iostream>
using namespace std;

void show_array(int array[], int n)

{
    for(int i=0;i<n;i++)
    {

        cout<<array[i]<<endl;
    }
    cout<<endl;

}

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */

    int n,array[100],sum=0;

    cout<<"Enter array size = ";
    cin>>n;

    cout<<"Enter array = ";

    for(int i=0;i<n;i++)
    {

        cin>>array[i];
   //      sum+=array[i];
    }


    show_array(array,n);
    //
    //cout<<sum;
    return 0;



}



