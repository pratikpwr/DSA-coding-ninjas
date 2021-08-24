#include <iostream>
using namespace std;
// Given a string, compute recursively a new string where all
// appearances of "pi" have been replaced by "3.14".

int lengthOfString(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + lengthOfString(str + 1);
}

void rp(char input[], int n)
{
    // return if string have 0 or 1 element
    if (input[n] == '\0' || input[n + 1] == '\0')
    {
        return;
    }

    // brings the smaller output
    rp(input, n + 1);

    if (input[n] == 'p' && input[n + 1] == 'i')
    {

        // length of string
        int l = lengthOfString(input);

        // shift element of string by 2 to right
        for (int i = l; i >= n + 2; i--)
        {
            input[i + 2] = input[i];
        }

        // replace with 3.14
        input[n] = '3';
        input[n + 1] = '.';
        input[n + 2] = '1';
        input[n + 3] = '4';
    }
}

void replacePi(char input[])
{
    rp(input, 0);
}

int main()
{

    char str[] = "pippppiiiipi";

    replacePi(str);

    cout << str;

    return 0;
}