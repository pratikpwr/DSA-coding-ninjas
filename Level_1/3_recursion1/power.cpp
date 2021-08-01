#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    // int smallOutput = power(x, n - 1);
    // int output = x * smallOutput;
    // return output;
    return x * power(x, n - 1);
}

int main()
{

    int i =4;
    int n = 4;

    cout << power(i, n) << endl;
    return 0;
}