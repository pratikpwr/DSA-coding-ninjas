// Given two integers M & N, calculate and return their
// multiplication using recursion. You can only use
// subtraction and addition for your calculation.
// No other operators are allowed.
#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    if (n == 0 || m == 0)
        return 0;

    int ans = m + multiplyNumbers(m, n - 1);
    return ans;
}

int main()
{
    cout<< multiplyNumbers(5,0);
    return 0;
}