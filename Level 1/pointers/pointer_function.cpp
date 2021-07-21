#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

// pass by value
void incrementPtr(int* p)
{
    p = p + 1;
}

// pass by reference
void incPtr(int* p)
{
    (*p)++;
}

int main()
{
    int i = 10;
    int *ptr = &i;

    print(ptr);

    //pass by value
    cout << ptr << endl;
    incrementPtr(ptr);
    cout << ptr << endl;

    //pass by reference
    // both variables have the same address
    cout << *ptr << endl;
    incPtr(ptr);
    cout << *ptr << endl;

    return 0;
}