#include<iostream>
using namespace std;

// Pointer arithmatic
int main() {

    int i = 10;
    int *p = &i;

    cout<<p<<endl;

    // This will add 4 bit space to value that p has
    // i.e. adds 4 bits to address
    p=p+1;
    cout<<p<<endl;

    // this arimatic of array mostly works in the case of arrays

    return 0;
}