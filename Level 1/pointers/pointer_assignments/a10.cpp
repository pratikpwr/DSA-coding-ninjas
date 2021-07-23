#include <iostream>
using namespace std;

int f(int x, int *py, int **ppz)
{
    // x = 4, py = &c, ppz = &b
    int y, z;
    **ppz += 1;       // c = 5
    z = **ppz;        // z =5
    *py += 2;         // c = 5+2 =7
    y = *py;          // y = 7
    x += 3;           // x = 4+3 = 7
    return x + y + z; // 7+7+5
}

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a); // OUTPUT : 19
    return 0;
}