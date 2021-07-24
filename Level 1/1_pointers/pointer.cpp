#include <iostream>
using namespace std;

int main()
{
    int i = 10;

    // '&' -  'address of' operator
    // gives address of variable 
    cout << &i<<endl; 

    // p is a pointer which stores the address of int i
    int * p = &i;
    cout<<p<<endl;

    // '*' dereferrencing operator
    // gives value of variable using pointer
    cout<<*p<<endl;

    int * q = p;
    // q also stores address of i
    cout<<q<<endl;

    // *q stores value of i
    cout<<*q<<endl;

    return 0;
}

