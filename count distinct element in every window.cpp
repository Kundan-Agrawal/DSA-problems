#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void distinctEle(int arr[], int n, int k)
{
    map<int, int> m;

    for (int i = 0; i < k; i++)
    {
        m[arr[i]] += 1;
    }

    cout << m.size() << " ";

    for (int i = k; i < n; i++)
    {

        m[arr[i - k]] -= 1;

        if (m[arr[i - k]] == 0)
        {
            m.erase(arr[i - k]);
        }
        m[arr[i]] += 1;

        cout << m.size() << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    distinctEle(arr, n, k);
    return 0;
}
// Algorithms
// step1-- create a frequency map pf first k items
// step2== print size ofthe frequency map
// step3=-- for(int i=k;i<n;i++)
// 3a--decrease frequancy of arr[i-k]
// 3b--- if the frequency of arr[i-k] bceomes 0 remove it from the mpa
// 3c-- if arr[i] does not exitst tin the mao, insert it else increse its frequency in the map
// 3d== print size of map