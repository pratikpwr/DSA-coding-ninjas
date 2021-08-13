#include <iostream>
#include <math.h>
using namespace std;
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
double geometricSum(int k)
{
    if (k == 0)
        return 1.00000;

    double ans = (1 / pow(2, k)) + geometricSum(k - 1);
    return ans;
}

int main()
{
    cout << geometricSum(4);
    return 0;
}