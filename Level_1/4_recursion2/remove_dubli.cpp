#include <iostream>
using namespace std;
// Given a string S, remove consecutive duplicates from it recursively.
int lengthOfString(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + lengthOfString(str + 1);
}

void rcdHelper(char *input, int n)
{
    if (input[n] = '\0')
        return;

    rcdHelper(input, n + 1);

    if (input[n] == input[n + 1])
    {
        int l = lengthOfString(input);

        // remove and shift string to left
        for (int i = n; i < l; i++)
        {
            input[i] = input[i + 1];
        }
    }
}

void removeConsecutiveDuplicates(char *input)
{
    rcdHelper(input, 0);
}

int main()
{
    char str[] = "aabdccdess";
    removeConsecutiveDuplicates(str);
    cout << str;

    return 0;
}