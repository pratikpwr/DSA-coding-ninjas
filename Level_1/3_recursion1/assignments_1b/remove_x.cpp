#include <iostream>
using namespace std;
// Given a string, compute recursively a new string where all 'x' chars have been removed.
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
        int l = 0;
        for (int j = 0; str[j] == '\0'; j++)
        {
            l++;
        }

        // shift the string elements to left by one
        for (int i = size; i < l; i++)
        {
            str[i] = str[i + 1];
        }
    }
}

void removeX(char input[])
{
    // Write your code here
    removeXHelper(input, 0);
}

int main()
{
    char str[] = "xaabax";

    removeX(str);

    cout << str;

    return 0;
}