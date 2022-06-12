#include <iostream>
#include <unordered_set>
using namespace std;

bool isZero(int a[], int m)
{
    unordered_set<int> h;
    int prefixSum = 0;
    for (int i = 0; i < m; i++)
    {
        prefixSum += a[i];
        if (h.find(prefixSum) != h.end())
        {
            return true;
        }
        if (prefixSum == 0)
        {
            return true;
        }
        h.insert(prefixSum);
    }
    return false;
}
int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << isZero(a, m);

    return 0;
}
// (m),O(m)