// You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the
//  recursive sum of its digits until we get a single digit number.
#include <iostream>
using namespace std;

int digitsSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + digitsSum(n / 10);
}
int digitalRoot(int num)
{
    if (num < 10)
    {
        return num;
    }
    int res;
    res = digitsSum(num);
    return digitalRoot(res);
}
int main()
{
    int n;
    cin >> n;
    cout << digitalRoot(n);
    return 0;
}
// O(d*d),O(d*d)