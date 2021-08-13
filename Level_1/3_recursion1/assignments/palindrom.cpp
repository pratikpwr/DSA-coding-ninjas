#include <iostream>;
using namespace std;

bool cp(char input[], int start, int end)
{
    if (end - start == 1 || start == end)
    {
        return 1;
    }
    else
    {
        if (input[start] == input[end])
        {
            return cp(input, start + 1, end - 1);
        }
        else
        {
            return 0;
        }
    }
}

bool checkPalindrome(char input[])
{
    int l = 0;
    for (int i = 0; i != '\0'; i++)
        l++;

    if (l == 0)
        return true;

    return cp(input, 0, l);
}

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
