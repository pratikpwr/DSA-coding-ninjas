#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    char j = i; // Implicite Typecasting

    cout << i << endl; // 65
    cout << j << endl; // A

    int *p = &i;
    char *q = (char *)p; // Explicite Typecasating

    cout << p << endl; // address of i
    cout << q << endl; // as char pointer it prints char A

    cout << *p << endl; // value of i
    cout << *q << endl; 
    cout << *(q + 1) << endl;
    cout << *(q + 2) << endl;
    cout << *(q + 3) << endl;

    return 0;
}