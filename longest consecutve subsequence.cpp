#include <iostream>
#include <unordered_set>
using namespace std;

int longestSub(int arr[], int n)
{
    unordered_set<int> h(arr, arr + n);
    int res = 1;
    for (auto x : h)
    {
        if (h.find(x - 1) == h.end())
        {
            int curr = 1;
            while (h.find(x + curr) != h.end())
            {
                curr++;
            }
            res = max(curr, res);
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
    cout << longestSub(a, m);
    return 0;
}
// O(m),O(m)
// how liner is possible where 2 loops are running??
// ans- we will do 2n look ups in this hash table
// so O[2n]---->O[n].