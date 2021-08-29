#include <iostream>
#include <string>
using namespace std;
// Given an integer n, using phone keypad find out all the
// possible strings that can be made using digits of input n

string getString(int lastDigit)
{
    if (lastDigit == 2)
        return "abc";
    else if (lastDigit == 3)
        return "def";
    else if (lastDigit == 4)
        return "ghi";
    else if (lastDigit == 5)
        return "jkl";
    else if (lastDigit == 6)
        return "mno";
    else if (lastDigit == 7)
        return "pqrs";
    else if (lastDigit == 8)
        return "tuv";
    else if (lastDigit == 9)
        return "wxyz";
    else
        return " ";
}

int keypad(int num, string output[])
{

    //base case
    if (num == 0)
    {
        output[0] = "";
        return 1;
    }

    int lastDigit = num % 10;                    // eg num = 23 => 3
    int smallOutSize = keypad(num / 10, output); // => 2

    string s = getString(lastDigit);

    int ans_size = smallOutSize * s.size();
    string temp[ans_size];

    int k = 0;
    for (int i = 0; i < smallOutSize; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            temp[k] = output[i] + s[j];
            k++;
        }
    }

    for (int i = 0; i < ans_size; i++)
    {
        output[i] = temp[i];
    }

    return s.size() * smallOutSize;
}

int main()
{
    int num = 23;
    // cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}