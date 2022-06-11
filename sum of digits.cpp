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
int main()
{
    int n;
    cin >> n;
    cout << digitsSum(n);

    return 0;
}
// O(d),O(d) where d is no.of digits