#include <iostream>
using namespace std;

int sum(int a, int b, int c = 4)
{
    return a + b + c;
}
int main()
{

    cout << sum(5, 6);
    // as c is default argument
    // so its okay if we doesnt pass any value

    return 0;
}