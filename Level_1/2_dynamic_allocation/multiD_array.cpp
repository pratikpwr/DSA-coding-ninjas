#include <iostream>
using namespace std;

int main()
{

    int m, n;
    cout << "rows and column: ";
    cin >> m >> n;

    int **p = new int *[m];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}