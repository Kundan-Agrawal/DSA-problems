// position starts with 1
#include <iostream>
using namespace std;
int jos(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (jos(n - 1, k) + k) % n;
}
int myJos(int n, int k)
{
    return jos(n, k) + 1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << myJos(n, k);
    return 0;
}