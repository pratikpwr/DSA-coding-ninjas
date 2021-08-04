#include <iostream>
using namespace std;


// get nth element of fibonacci series
// 0 1 1 2 3 5 8 13
int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int smallOut1 = fib(n - 1);
    int smallOut2 = fib(n - 2);
    return smallOut1 + smallOut2;
}

int main()
{
    cout << fib(10) << endl;

    return 0;
}