#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int n,i=1,val=1;
     cin>>n;

    while(i<=n)
    {
        int j=1,k;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
            cout<<"*";
        }

        while(j<=i)
        {
            cout<<"*";
            j++;


        }
        cout<<endl;
        i++;
    }
}


