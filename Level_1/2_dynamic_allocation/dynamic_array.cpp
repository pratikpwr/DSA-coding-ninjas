#include <iostream>
using namespace std;

int main()
{

    // max number from array

    int n;
    cout << "Enter num of elements: ";
    cin >> n;

    int *p = new int[n];

    for (int i; i < n; i++)
    {
        cin >> p[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < p[i])
        {
            max = p[i];
        }
    }

    cout <<"\Max no:"<< max;
    return 0;
}