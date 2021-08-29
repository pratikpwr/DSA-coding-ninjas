#include <iostream>
using namespace std;

int subs(string input, string output[])
{
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallStr = input.substr(1);
    int smallOutSize = subs(smallStr, output);

    for (int i = 0; i < smallOutSize; i++)
    {
        output[i + smallOutSize] = input[0] + output[i];
    }

    return 2 * smallOutSize;
}
int main()
{
    string input = "abc";
    string *output = new string[100];
    int count = subs(input, output); // this function also return count 
    for (int i = 0; i < count; i++)
        cout << output[i] << endl;

    return 0;
}