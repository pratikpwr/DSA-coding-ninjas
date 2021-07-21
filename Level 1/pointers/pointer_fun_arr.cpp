#include <iostream>
using namespace std;

// when array is passed to a function
// it is passed as pointer
int sum(int a[], int size)
{
    cout << "size of a in function: " << sizeof(a) << endl;

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += a[i];
    }

    return ans;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << "size of a in main: " << sizeof(a) << endl;
    cout << sum(a, 5) << endl;

    return 0;
}