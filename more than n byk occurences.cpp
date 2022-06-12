#include <iostream>
#include <unordered_map>
using namespace std;

void nBykOccurence(int a[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]] += 1;
    }
    for (auto e : m)
    {
        if (e.second > n / k)
        {
            cout << e.first << " ";
        }
    }
}
// if n is big and k is small there is other approach
// below code is copied from geeks DSA track
void printNByK(int arr[], int n, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) != m.end())
            m[arr[i]]++;
        else if (m.size() < k - 1)
            m[arr[i]] = 1;
        else
            for (auto x : m)
            {
                x.second--;
                if (x.second == 0)
                    m.erase(x.first);
            }
    }
    for (auto x : m)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (x.first == arr[i])
                count++;
        }
        if (count > n / k)
            cout << x.first << " ";
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    nBykOccurence(b, n, k);

    return 0;
}