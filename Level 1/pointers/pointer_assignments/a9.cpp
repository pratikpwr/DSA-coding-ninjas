#include <iostream>
using namespace std;
int main()
{
    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++; // i = 9
    q = &p;
    (**q)++; // i = 10
    r = &q;
    cout << *p << " " << **q << " " << ***r; // OUTPUT : 10 10 10
    return 0;
}