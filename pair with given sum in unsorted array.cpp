#include <iostream>
#include <unordered_set>
using namespace std;

int isPair(int a[], int m, int n)
{
    unordered_set<int> h;
    for (int i = 0; i < m; i++)
    {
        if (h.find(n - a[i]) != h.end())
        {
            return true;
        }
        else
        {
            h.insert(a[i]);
        }
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
    int n;
    cin >> n;
    cout << isPair(a, m, n);

    return 0;
}
// theta(m+n),O(m+n)