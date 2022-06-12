#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefix_Sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_Sum += arr[i];
        if (prefix_Sum == sum)
        {
            res = i + 1;
        }
        if (m.find(prefix_Sum) == m.end())
        {
            m.insert({prefix_Sum, i});
        }
        if (m.find(prefix_Sum - sum) != m.end())
        {
            res = max(res, i - m[prefix_Sum - sum]);
        }
    }
    return res;
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
    cout << longestSubarraySum(a, m, n);
    return 0;
}
// theta(m),O(m)