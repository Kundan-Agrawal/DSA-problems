// have dobt in it in long long ans
//  my answer is not coming correct uwing beow code
// Python code is below it is working good
// def power(self,x,y):
//         #Your code here
//         temp = 0
//         if( y == 0):
//             return 1
//         temp = self.power(x, int(y / 2))
//         if (y % 2 == 0):
//             return (temp * temp)%1000000007
//         else:
//             return (x * temp * temp)%1000000007

#include <iostream>
using namespace std;

long long power(unsigned long long n, int p)
{
    if (p <= 0)
    {
        return 1;
    }
    cout << n << endl;
    return n * power(n, p - 1) % 1000000007;
}
int reversePower(int n)
{
    int temp;
    temp = n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    long long ans = power(temp, rev) % 1000000007;
    cout << ans << "helo" << endl;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << (reversePower(n));
    return 0;
}