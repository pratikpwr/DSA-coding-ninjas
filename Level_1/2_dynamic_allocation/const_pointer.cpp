#include <iostream>
using namespace std;

int main()
{

    int const i = 10;
    // int * p = &i; // we can not do this
    const int *p = &i; // we have to use const pointer as well

    //
    int j = 12;
    const int *k = &j; // k is pointer to const int
    cout << *k << endl;
    // (*k)++; we can not do this
    j++;
    cout << *k << endl;

    k = &i; // we can change value of k also
    cout << *k << endl;

    int *const p2 = &j; // this will be constant pointer to a non const variable
    (*p2)++;            // we can do thsi to const pointer
    // p2 = &i // we can not do this
    cout << j << endl;

    int const *const p3 = &j; // p3 is const pointer to const int

    return 0;
}