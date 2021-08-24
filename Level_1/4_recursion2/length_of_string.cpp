#include <iostream>
using namespace std;

int lengthOfString(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + lengthOfString(str + 1);
}

int main()
{
    char str[] = "hello world";

    cout << lengthOfString(str);

    return 0;
}