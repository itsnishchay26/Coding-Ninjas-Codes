#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,i=1,val=1;
    cout<<"Enter the number of rows = ";
    cin>>n;

    while(i<=n)
    {
        int j=1,k;
        while(j<=i)
        {
            cout<<val;
            k=i+1;
            cout<<k;
            val++;
            j++;

        }
        cout<<endl;
        i++;
        k++;
    }

}


