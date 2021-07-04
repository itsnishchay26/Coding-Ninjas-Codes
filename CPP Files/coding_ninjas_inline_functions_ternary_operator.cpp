#include<iostream>
using namespace std;

inline int max(int x, int y)
{
    return (x>y)?x:y;
}

int main()
{
    int a,b;

    cin>>a>>b;

    int c=max(a,b);
    cout<<c;

}

