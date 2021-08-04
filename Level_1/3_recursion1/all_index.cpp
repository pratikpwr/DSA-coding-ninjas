#include <iostream>
using namespace std;
// Given an array of length N and an integer x, you need to find
//  all the indexes where x is present in the input array. Save
//  all the indexes in an array (in increasing order).

int allIndexes(int input[], int size, int x, int output[])
{
    if (size == 0)
        return 0;

    int ans = allIndexes(input, size - 1, x, output);

    if (input[size - 1] == x)
    {
        output[ans] = size - 1;
        return ans + 1;
    }
    else
        return ans;
}

int main()
{
    int i[11] = {21, 22, 46, 12, 61, 25, 33, 16, 99, 96, 25};

    cout << allIndexes(i, 11, 25, {});

    return 0;
}