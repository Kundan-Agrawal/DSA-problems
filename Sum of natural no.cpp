#include <iostream>
using namespace std;

int getSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + getSum(n - 1);
}

int main()
{
    int n = 4;
    cout << getSum(n);
    return 0;
}
// time complexity- O(N)
// space complexity- O(N)  because at n==0 in recrsive approcj there will be n+1 function in call stacks