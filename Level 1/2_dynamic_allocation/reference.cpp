#include <iostream>
using namespace std;

//pass by reference
void increment(int &i)
{
  i++;
}

// function returning reference
// but due to scope of a system releases its memory
int &f(int n)
{
  int a = n;
  return a;
}

int *f2()
{
  int i = 10;
  return &i;
}

int main()
{
  int i = 10;

  // Referencing using &
  int &j = i; // j has the same address as of i

  i++; // so if we change i, j changes as well
  cout << j << endl;

  increment(i);
  cout << i << endl;

  // NOTE: Do not return the pointer or reference of variable from a function
  // the memory is released by system after functions scope finishes

  int &k = f(i); // but k can still have address of a
  int *p = f2();  
  return 0;
}