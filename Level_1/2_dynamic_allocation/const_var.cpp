#include <iostream>
using namespace std;

int main()
{

    const int i = 10;
    // i is a constant variable
    // so its value can not be changed later after initialization

    // const reference from non const int
    int j = 2;
    const int &k = j; //  reference variable
    // here path constant but not value
    // so we can change value with j but not with k
    j++;
    cout << k << endl;

    // reference to const int - we can not do this
    const int  i2 = 9;
    // int & k2 = i2;
    // k++;

    return 0;
}