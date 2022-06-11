#include <iostream>
using namespace std;
int countDigits(int n)
{
    if (n < 10)
    {
        return 1;
    }

    return 1 + countDigits(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}
// O(d),O(d)