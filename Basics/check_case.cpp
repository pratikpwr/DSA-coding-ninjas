#include<iostream>
using namespace std;
// Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet
int main()
{
    
    char input;
    
    cin>> input;
    
    
    if( int(input) >= 65 && int(input) <= 90 )
    {
        cout<< 1<<endl;
    } else if( int(input) >= 97 && int(input) <=122 )
    {
        cout<< 0<<endl;
    } else {
        cout<< -1<<endl;
    }

}