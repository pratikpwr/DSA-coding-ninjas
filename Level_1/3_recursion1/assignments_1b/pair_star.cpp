#include <iostream>
using namespace std;
// Given a string S, compute recursively a new string where identical chars
// that are adjacent in the original string are separated from each other by a "*".

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
        int l = 0;
        for (int i = 0; input[i] != '\0'; i++)
        {
            l++;
        }

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