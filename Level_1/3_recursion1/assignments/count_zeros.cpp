#include <iostream>
using namespace std;
// Given an integer N, count and return the number of zeros
// that are present in the given integer using recursion.
int countZeros(int n)
{
    if (n == 0)
        return 0;

    if (n % 10 == 0)
        return countZeros(n / 10) + 1;
    else
        return countZeros(n / 10);
    cout<< n<< endl;
}

int main()
{
    cout << countZeros(203620);
    return 0;
}