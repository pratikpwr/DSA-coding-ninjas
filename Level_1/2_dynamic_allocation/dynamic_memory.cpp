#include <iostream>
using namespace std;

int main()
{

    // usually variables get stack memory
    // stack memory is limited assigned by systtem
    // so we use heap memory

    // new keyword is used to assign heap memory
    // it brings the address of memory for datatype from a heap
    int *p = new int; // store that address in pointer
    *p = 10;          // used it by using dereferencing

    double *pd = new double;
    char *pc = new char;

    cout << *p;
}