#include <iostream>
using namespace std;

// Write a recursive function to convert a given string into the number it represents.
// That is input will be a numeric string that contains only numbers, you need to convert
// the string into corresponding integer and return the answer.

// when we  do - ``` - '0'  ``` this means convert char to int
int stringToNumberHelper(char input[], int n)
{
    // if last digit is 0 return 0
    if (n == 0)
    {
        return input[n] - '0';
    }

    int smallOut = stringToNumberHelper(input, n - 1);

    // convert current char into digit
    int a = input[n] - '0';

    // return 
    //  Input = "23"
    //  First Traversal = 2,
    //  Second Traversal = 20 + 3,
    //  Result = 23
    return smallOut * 10 + a;
}

int stringToNumber(char input[])
{
    int l = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        l++;
    }
    return stringToNumberHelper(input, l - 1);
}

int main()
{
    char input[50] = "0228032";

    cout << stringToNumber(input) << endl;
}




