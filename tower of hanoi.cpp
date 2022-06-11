#include <iostream>
#include <math.h>
using namespace std;
void towerOfHanoi(int n, int A = 1, int B = 2, int C = 3)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, A, C, B);
    cout << "move disk " << n << " from rod " << A << " to rod " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n);

    int result = 1;
    for (int i = 0; i < n; ++i)
    {
        result *= 2;
    }

    cout << result - 1 << endl;

    return 0;
}