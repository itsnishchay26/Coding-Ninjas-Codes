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
        int j=1,k=0;
        while(j<=n-i)//here
        {
            cout<<" ";
            j++;
        }
        //j=1;//here
        while(j<=2*i-1) // here
        {
            cout<<"*";
            j++;


        }
        cout<<endl;
        i++;
    }
}
