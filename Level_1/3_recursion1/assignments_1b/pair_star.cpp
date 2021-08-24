#include <iostream>
using namespace std;
// Given a string S, compute recursively a new string where identical chars
// that are adjacent in the original string are separated from each other by a "*".
int lengthOfString(char str[])
{
    if (str[0] == '\0')
        return 0;
    return 1 + lengthOfString(str + 1);
}

void pairStarHelper(char input[], int n)
{

    if (input[n] == '\0')
    {
        return;
    }

    pairStarHelper(input, n + 1);

    if (input[n] == input[n + 1])
    {

        // length of string
        int l = lengthOfString(input);

        // shift one element to right
        for (int i = l; i >= n; i--)
        {
            input[i + 2] = input[i + 1];
        }

        input[n + 1] = '*';
    }
}

void pairStar(char input[])
{
    pairStarHelper(input, 0);
}

int main()
{

    char str[] = "aaba";

    pairStar(str);

    cout << str;

    return 0;
}