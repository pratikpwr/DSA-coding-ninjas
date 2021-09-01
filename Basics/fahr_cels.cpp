#include <iostream>
using namespace std;
// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) 
// and Step Size (W), you need to convert all Fahrenheit values from Start to 
// End at the gap of W, into their corresponding Celsius values and print the table.
int main()
{

    int s = 0, w = 0, e = 0;

    cin >> s;
    cin >> e;
    cin >> w;

    int i = s;
    while (i <= e)
    {
        int c = (i - 32) / 1.8;
        cout << i << "\t" << c << endl;
        i += w;
    }

    return 0;
}