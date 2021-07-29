#include <iostream>
using namespace std;

int main()
{

    int a[10];

    // BOTH HAS SAME ADDRESS
    // array variable 'a' almost behaves like pointer
    cout << a << endl;
    cout << &a << endl;

    a[0] = 5;
    cout << *a << endl;

    a[1] = 10;
    cout << *(a + 1) << endl;
    // so *(a+i) = a[i] = i[a]

    int *p = &a[0];

    cout << p << endl;
    cout << &p << endl;

    // Difference between array var and pointer

    // sizeof()
    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;

    // & address of operator
    cout << &a << endl; // prints same as a prints
    cout << &p << endl; // prints address not value

    // array can not be reassigned
    // we can do this
    p = &a[3];
    p = p+1;
    // but we cant do this
    // a = a+3;

    return 0;
}