#include <iostream>
using namespace std;

int digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout<< n<< endl;
    return digits(n / 10) + 1;
}

int main()
{
    cout << digits(12345);
    return 0;
}