#include <iostream>
#include <unordered_set>
using namespace std;

int unionCount(int a[], int b[], int m, int n)
{
    unordered_set<int> h(a, a + m);
    for (int i = 0; i < n; i++)
    {
        h.insert(b[i]);
    }
    return h.size();
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
    cout << unionCount(a, b, m, n);

    return 0;
}
// theta(m+n),O(m+n)