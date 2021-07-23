#include <iostream>
using namespace std;

int main()
{
    // double pointer is pointer to pointer

    int i = 10;
    int *p = &i;
    // q contains address of p
    int **q = &p;

    cout << &p << endl;
    cout << q << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **q << endl;
    return 0;
}