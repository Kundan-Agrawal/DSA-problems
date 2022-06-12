// this problem is a tricky problem
// first we wil replace all zero will -1
// then we will call the function to find length of longest subarray with o sum
// we have done this problem
#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarray(int arr[], int n, int sum)
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
int longestSubarray01(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    return longestSubarray(arr, n, 0);
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
    cout << longestSubarray01(a, m);
    return 0;
}
// theta(m),O(m)