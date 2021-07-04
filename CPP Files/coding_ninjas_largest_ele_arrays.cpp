#include<iostream>
#include<climits>
using namespace std;

int main()
{

    int n,largest[50],max=INT_MIN;

    cout<<"Enter the size of array = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {

        cin>>largest[i];
    }

    for(int i=0;i<n;i++)
    {

        cout<<largest[i]<<endl;
    }

    //max=largest[0];

    for(int i=0;i<n;i++)
    {

        if(largest[i]>max)
          {

            max=largest[i];}
    }

    cout<<endl<<"Maximum Element in the array is "<<max;

    return 0;
}
