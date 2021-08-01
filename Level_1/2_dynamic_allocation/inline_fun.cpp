#include <iostream>
using namespace std;

// inline function - upto 2-3 lines
// depends on compiler
inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a, b;
    a = 4;
    b = 6;

    // int c;
    // if (a > b)
    // {
    //     c = a;
    // }
    // else
    // {
    //     c = b;
    // }

    // tertiary operator
    // int c = (a > b) ? a : b;
    int c = max(a, b);
    cout << c << endl;

    return 0;
}