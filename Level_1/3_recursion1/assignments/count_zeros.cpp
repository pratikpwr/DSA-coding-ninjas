#include <iostream>
using namespace std;
// Given an integer N, count and return the number of zeros
// that are present in the given integer using recursion.
int countZeros(int n)
{
    if(n == 0)
        return 0;
    int ans = countZeros(n/10);
    if(ans == 0){
        return ans+1;
    }else{
        return ans;
    }
}

int main()
{
    cout << countZeros(203620);
    return 0;
}