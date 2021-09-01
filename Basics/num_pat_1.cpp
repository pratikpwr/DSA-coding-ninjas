#include <iostream>
using namespace std;
// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567
int main()
{

    int n = 0;
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i+(i-1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}