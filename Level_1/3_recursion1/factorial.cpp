#include <iostream>
using namespace std;

// Recusrsion
// the functions call itselfs

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int i;
    i = 4;
    int output = factorial(i);
    cout << output << endl;
    return 0;
}