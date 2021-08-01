#include <iostream>
using namespace std;

// check is array sorted asc
bool isSorted(int a[], int size)
{

    if (size == 0 || size == 1)
        return true;

    if (a[0] > a[1])
        return false;

    bool isSmallerSorted = isSorted(a + 1, size - 1);
    return isSmallerSorted;
}

int main()
{
    int a[5] = {1, 2, 3, 6, 5};
    isSorted(a, 5) ? cout << "Yes" : cout << "No";
    return 0;
}