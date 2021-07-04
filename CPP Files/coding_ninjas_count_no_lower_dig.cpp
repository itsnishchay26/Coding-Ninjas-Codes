#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  	char ch;
    int ch_small=0,ch_dig=0,ch_white=0;

    ch=cin.get();

    while(ch!='$')
    {
        if(ch>=97&&ch<=122)
        {
            ch_small++;
        }
        else if(ch>=48&&ch<=57)
        {
            ch_dig++;
        }
        else if(ch=='\t' || ch=='\n' || ch==' ')
        {
            ch_white++;
        }
    }
    cout<<ch_small<<ch_dig<<ch_white;
}



