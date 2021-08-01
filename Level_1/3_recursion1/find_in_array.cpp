#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x)
{

    if (size < 0)
        return false;

    if (input[size - 1] == x)
        return true;

    return checkNumber(input, size - 1, x);
}

int main()
{
    int a[3] = {9, 8, 10};
    cout << checkNumber(a, 3, 7);
    return 0;
}