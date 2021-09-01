// Print the following pattern
// Pattern for N = 4
//    1
//   23
//  345
// 4567


#include<iostream>
using namespace std;

int main(){

    int n = 4;
    // cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i+(i-1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}