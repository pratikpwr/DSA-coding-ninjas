
#include <iostream>
using namespace std;
int sumOfDigits(int n);
int main()
{
    cout << sumOfDigits(12345);

    return 0;
}
int sumOfDigits(int n)
{
    // Write your code here

    if (n == 0)
        return 0;

    int ans = sumOfDigits(n / 10);
    ans += n % 10;
    return ans;
}
