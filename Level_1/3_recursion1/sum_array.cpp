#include <iostream>
using namespace std;
// sum of array elements

int sum(int input[], int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return input[0];

    return input[n - 1] + sum(input, n - 1);
}

int main()
{
    int a[3] = {2, 3, 4};
    cout << sum(a, 3);
    return 0;
}