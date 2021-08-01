#include <iostream>
using namespace std;

// Given an array of length N and an integer x, you need to find
// and return the first index of integer x present in the array.
// Return -1 if it is not present in the array.

int firstIndex(int input[], int size, int x)
{

    if (size == 0)
        return -1;
    if (input[0] == x)
        return 0;

    int ans = firstIndex(input + 1, size - 1, x);

    if (ans == -1)
        return -1;
    else
        return ans + 1;
}

int main()
{

    int a[6] = {3, 6, 2, 8, 4, 2};
    cout << firstIndex(a, 6, 2); // returns position where x is present first in array

    return 0;
}