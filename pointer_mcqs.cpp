#include <iostream>
using namespace std;

int main()
{

    int a = 100, b = 200;
    int *p = &a, *q = &b;
    p = q;
    // ANS: p now points to b

    int a = 50;
    int *ptr = &a;
    cout << (*ptr)++ << ""; // 50 value will be printed then incremented
    cout << a << endl;      // 51

    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;
    // this will cause an error due to pointer pointing to 0 address 
    // so it can not change the value
    
    return 0;
}