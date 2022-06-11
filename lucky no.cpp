#include <iostream>
using namespace std;
bool lucky(int n, int i = 2)
{
    if (n == 1)
    {
        return true;
    }
    if (i > n)
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }
    return lucky((n - n / i), i + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << lucky(n);

    return 0;
}