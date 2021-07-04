#include<iostream>
using namespace std;


int main(){

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i=1;
    //char ch;

    cin>>n;

    while(i<=n)
    {
        int j=1;
        char ch='A';
        while(j<=i)
        {
            char printchar= ch + i - 1;
            cout<<printchar;

            j++;

            //ch++;

        }
        cout<<endl;
        i++;
        //_char=

        //new_char++;
        //ch++;
    }
}


