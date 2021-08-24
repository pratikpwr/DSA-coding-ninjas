#include <iostream>
using namespace std;
// Given a string, compute recursively a new string where all 'x' chars have been removed.

int lengthOfString(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + lengthOfString(str + 1);
}

void removeXHelper(char str[], int size)
{

    if (str[size] == '\0')
    {
        return;
    }

    removeXHelper(str, size + 1);

    if (str[size] == 'x')
    {
        // length of string
        int l = lengthOfString(str);

        // shift the string elements to left by one
        for (int i = size; i < l; i++)
        {
            str[i] = str[i + 1];
        }
    }
}

void removeX(char input[])
{
    removeXHelper(input, 0);
}

int main()
{
    char str[] = "pixjfsbxex";

    removeX(str);

    cout << str;

    return 0;
}