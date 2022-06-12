#include <iostream>
#include <unordered_set>
using namespace std;

int subarraySum(int a[], int m, int n)
{
    int prefix_Sum = 0;
    unordered_set<int> h;
    for (int i = 0; i < m; i++)
    {
        prefix_Sum += a[i];
        if (prefix_Sum == n)
        {
            return 1;
        }
        if (h.find(prefix_Sum - n) != h.end())
        {
            return 1;
        }
        h.insert(prefix_Sum);
    }
    return 0;
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
    int n;
    cin >> n;
    cout << subarraySum(a, m, n);

    return 0;
}
// theta(m),O(m)