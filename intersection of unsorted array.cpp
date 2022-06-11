#include <iostream>
#include <unordered_set>
using namespace std;
int intersect(int a[], int b[], int m, int n)
{
    unordered_set<int> s(a, a + m);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            res++;
            s.erase(b[i]);
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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << intersect(a, b, m, n);

    return 0;
}