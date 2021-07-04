#include<iostream>
using namespace std;

int main()
{
    /*int i = 10;
    int *p = &i;

    int **a = &p;

    cout<<a<<endl;
    cout<<&p<<endl;  */
 int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
}
