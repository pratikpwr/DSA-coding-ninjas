#include <iostream>
using namespace std;
void Q(int z)
{
    z += z;           // 7+7 = 14
    cout << z << " "; // 14
}

void P(int *y)
{
    int x = *y + 2; // 5+2 = 7
    Q(x);
    *y = x - 1;       // 7-1 = 6 changes main x value to 6
    cout << x << " "; // 7
}

int main()
{
    int x = 5;
    P(&x);     // add of x
    cout << x; //6

    // OUTPUT: 14, 7, 6
    return 0;
}