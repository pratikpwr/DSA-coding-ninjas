#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 3};
    char b[] = "abc";

    cout << a << endl; // this array prints address
    cout << b << endl; // but char array prints value

    char *c = &b[0];
    cout << c << endl; // this aslo prints value of char array

    //
    char c1 = 'a';
    char *pc1 = &c1;

    cout << c1 << endl;  // this prints its value
    cout << pc1 << endl; // this prints a... until it doesnt found \0

    //char* pstr = "abcde";
    // this points to read only memeory

    return 0;
}