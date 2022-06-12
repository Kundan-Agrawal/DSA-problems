// this problem have a trick
// step1- compute difference array
// step-2 return length of thr longest subarray with 0 sum in temp
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
int commonSubarray(int arr1[], int arr2[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr1[i] - arr2[i];
    }
    return longestSubarray(temp, n, 0);
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
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    cout << commonSubarray(a, a2, m);
    return 0;
}
// theta(m),O(m)