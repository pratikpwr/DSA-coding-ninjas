#include<iostream>
using namespace std;

int main(){

    // garbage value
    int i;
    cout<<i<<endl;

    // incrementing garbage value
    i++;
    cout<<i<<endl;

    // pointer of garbage address
    int * p;
    cout<<p<<endl;

    // incrementing garbage address value
    // Never do this DENGER
    (*p)++;
    cout<<*p<<endl;

    // NOTE: when you initialize pointer always specify it a value or with 0

    return 0;
}