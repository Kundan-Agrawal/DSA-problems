#include <iostream>
using namespace std;

// this function is tail recursive function
// because there is no code runnung after calling the function recursively
void printNto1(int n)
{
    if (n == 0) // we get segmentation fault if base cases are wrong in cpp
    {           // and stack overflow in java
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}

// this function is not a tail recursive function
void print1toN(int n)
{
    if (n == 0)
    {
        return;
    }

    print1toN(n - 1);
    cout << n << " ";
}
// the above function can be converted to tail recursive function
void print1toNtail(int n, int k = 1)
{
    if (n == 0)
    {
        return;
    }
    cout << k << " ";
    print1toNtail((n - 1), k + 1);
}

// tail recursive function are more optimized
// and reduces the auxillary spaces in function call stack
int main()
{
    int n = 4;
    print1toN(n);
    cout << endl;
    printNto1(n);
    cout << endl;
    print1toNtail(n);
    return 0;
}