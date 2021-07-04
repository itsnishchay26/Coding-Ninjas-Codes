#include <iostream>
using namespace std;
class B1{public :B1()
{cout<< “no argument constructor in B1”;}
~B1(){cout<< “destructor in B1”;}};
class B2{public :B2(){cout<< “no argument constructor in B2”;}
~B2(){cout<< “destructor in B2”;}};

class D: public B2, public B1{public :D(){cout<< “no argument constructor in D”;}~D(){cout<< “destructor in D”;}};int main(){ D objd;}
