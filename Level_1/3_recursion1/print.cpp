#include <iostream>
using namespace std;
// code to print numbers from 1 to n in increasing order recursively.
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main()
{
    print(8);
    return 0;
}